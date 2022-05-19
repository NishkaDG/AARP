
using System;
using System.Collections;
using Oculus.Interaction.Input;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WhiteboardPen : MonoBehaviour
{
    private Whiteboard whiteboard;
    private RaycastHit touch;

    private OVRHand m_hand;
    private OVRSkeleton m_skeleton;

    private Transform indexTip;
    private Transform thumbTip;
    private Transform indexDistal;

    private Vector3 originPoint;
    private Vector3 targetPoint;
    private float _lastX;
    private float _lastY;
    private ArrayList _points;
    private Color _color;
    private bool _playback;
    private bool _recording;
    private float _timeBetweenPinch;

    private const int WHITEBOARD_LAYER = 10;

    private void Awake()
    {
        //Get the scripts that hold information about hand tracking
        m_hand = GetComponent<OVRHand>();
        m_skeleton = GetComponent<OVRSkeleton>();
    }
    
    void Start()
    {
        this._lastX = 0.0f;
        this._lastY = 0.0f;
        this._points = new ArrayList();
        TextAsset f = (TextAsset)Resources.Load("UserCapture/userCapture");
        String fileText = System.Text.Encoding.UTF8.GetString(f.bytes);
        string[] csvRows = fileText.Split("\n");
        foreach (var row in csvRows)
        {
            var row2 = row.Split(",");
            var x = float.Parse(row2[0]);
            var y = float.Parse(row2[1]);
            var newLine = bool.Parse(row2[2]);
            _points.Add((x, y, newLine));
        }
        Debug.LogWarning(fileText);
        this._color = Settings.NormalColor;
        this._playback = false;
        this._recording = false;
        this._timeBetweenPinch = Time.time;
    }

    // Update is called once per frame
    void Update()
    {
        // Hands are not initialized immediately, so we need to wait until they appear
        // and are initialized.
        if (indexTip == null && m_skeleton.IsInitialized)
        {
            Debug.Log("Skeleton initialized");
            indexTip = m_skeleton.Bones[(int)OVRPlugin.BoneId.Hand_IndexTip].Transform;
            indexDistal = m_skeleton.Bones[(int)OVRPlugin.BoneId.Hand_Index2].Transform;
            thumbTip = m_skeleton.Bones[(int)OVRPlugin.BoneId.Hand_ThumbTip].Transform;
        }

        // If hands aren't initialized yet, don't execute the rest of the script.
        if (!indexTip) return;

        // Since we're going to be using our index finger as the pen
        // for this whiteboard, we need to cast a ray from the second joint
        // of our index finger to the tip of the finger.

        originPoint = indexDistal.position;
        targetPoint = indexTip.position;

        Vector3 direction = Vector3.Normalize(targetPoint - originPoint);
        float distance = Vector3.Distance(originPoint, targetPoint);
        
        if ((Time.time - _timeBetweenPinch > 1) &&
            m_hand.GetFingerIsPinching(OVRHand.HandFinger.Pinky))
        {
            this._recording = !this._recording;
            _timeBetweenPinch = Time.time;
        }

        //Cast a ray starting from the second index finger joint to the tip of the index finger.
        //Only check for objects that are in the whiteboard layer.
        if (Physics.Raycast(originPoint, direction, out touch, distance, 1 << WHITEBOARD_LAYER))
        {
            //Get the Whiteboard component of the whiteboard we obtain from the raycast.
            whiteboard = touch.collider.GetComponent<Whiteboard>();

            //touch.textureCoord gives us the texture coordinates at which our raycast
            //intersected the whiteboard. We can use this to tell the whiteboard where to
            //render the next circle.
            if (this._recording)
            {
                Debug.LogWarning("RECORDING: " + (ValueTuple<float, float, bool>)(touch.textureCoord.x,
                    touch.textureCoord.y, !whiteboard.GetTouch()));
            }
            
            whiteboard.SetColor((_recording) ? Settings.RecordingColor : Settings.NormalColor);
            whiteboard.SetTouchPosition(touch.textureCoord.x, touch.textureCoord.y);

            //If the raycast intersects the board, it means we are touching the board
            whiteboard.ToggleTouch(true);
        }
        else
        {
            if (whiteboard != null)
            {
                whiteboard.ToggleTouch(false);
            }
        }
    }
}
