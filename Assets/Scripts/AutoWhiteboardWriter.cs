using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoWhiteboardWriter : MonoBehaviour
{
    private ArrayList _points;
    private int _currentIndex = 0;
    public Whiteboard whiteBoard;

    private OVRHand _mHand;
    private OVRSkeleton _mSkeleton;
    
    private float _lastX, _lastY;

    private bool _playback;

    private Color _color;
    private float _timeBetweenPinch;

    private void Awake()
    {
        var rightHandAnchor = GameObject.Find("RightHandAnchor/OVRHandPrefab");
        _mHand = rightHandAnchor.GetComponent<OVRHand>();
        _mSkeleton = rightHandAnchor.GetComponent<OVRSkeleton>();
    }

    // Start is called before the first frame update
    void Start()
    {
        this._lastX = 0.0f;
        this._lastY = 0.0f;
        this._points = new ArrayList();
        TextAsset f = (TextAsset)Resources.Load(Settings.UserCaptureFiles[MenuButtons.CurrentCase]);
        // TextAsset f = (TextAsset)Resources.Load("UserCapture/Shapes");
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
        // Debug.LogWarning(fileText);
        this._color = Settings.RecordingColor;
        this._playback = false;
        this._timeBetweenPinch = Time.time;
    }

    // Update is called once per frame
    void Update()
    {

        if (Settings.WhiteboardPlaybackState[transform.parent.name][MenuButtons.CurrentCase] == false)
        {
            return;
        } 
        
        if ((Time.time - _timeBetweenPinch > 1) && _mSkeleton.IsInitialized &&
            _mHand.GetFingerIsPinching(OVRHand.HandFinger.Index))
        {
            Debug.LogWarning("pinching index");
            this._playback = !this._playback;
            _timeBetweenPinch = Time.time;
            Debug.LogWarning(this._playback);
        }

        if (this._playback)
        {
            Debug.LogWarning((_currentIndex, _points.Count));
        }
        
        if (this._playback && _currentIndex < _points.Count)
        {
            var point = (ValueTuple<float, float, bool>) _points[_currentIndex];
            float posX = point.Item1;
            float posY = point.Item2;
            bool newLine = point.Item3;
            whiteBoard.DrawToPoint(out var x, out var y, this._lastX, this._lastY, posX, posY, !newLine,this._color);
            this._lastX = x;
            this._lastY = y;
            _currentIndex += 1;
        }
        
    }
}
