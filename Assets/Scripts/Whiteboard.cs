
using System;
using System.Collections;
using System.Drawing;
using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;
using Color = UnityEngine.Color;

public class Whiteboard : MonoBehaviour
{
    private int texturesSizeHorizontal;
    private int texturesSizeVertical;

    private bool _isRecording;

    public int penSize = 2;

    public Texture2D texture;
    public Color color;
    private ArrayList userCapture;

    private bool touching, touchingLast;

    private float posX, posY;
    private float lastX, lastY;

    //One meter should correspond to 1024 pixels on the whiteboard.
    private const int TEXTURE_SCALE = 1024;

    //The default plane in Unity is 10 units by 10 units. When we dynamically rescale our
    //whiteboard in the future, a localScale of 0.1 will correspond to one meter. To correct for
    //this, we will be multiplying our texture sizes by this constant.
    private const int WHITEBOARD_SCALE = 10;

    private float startTime;
    private bool hasPrinted = false;

    public void Start()
    {
        //Scale the texture on the whiteboard based on the size of the whiteboard.
        texturesSizeHorizontal = (int)(transform.localScale.x * WHITEBOARD_SCALE * TEXTURE_SCALE);
        texturesSizeVertical = (int)(transform.localScale.z * WHITEBOARD_SCALE * TEXTURE_SCALE);

        //Create a new texture and set it as the default texture of this whiteboard
        Renderer renderer = GetComponent<Renderer>();
        texture = new Texture2D(texturesSizeHorizontal, texturesSizeVertical);
        renderer.material.mainTexture = this.texture;

        //Set the color of our pen to black
        color = Settings.NormalColor;
        this.userCapture = new ArrayList();

        this.touching = false;
        this.touchingLast = false;
        
        // We don't want to record right away
        this._isRecording = false;

    }

    // Update is called once per frame
    void Update()
    {

        // Go back to main menu
        if (OVRInput.GetUp(OVRInput.Button.Start))
        {
            SceneManager.LoadScene(0, LoadSceneMode.Single);
        }

        //DrawCircle method draws a circle from the top left of given coordinates, 
        //but we want the circle to be centered at the given coordinates.
        int x = (int)(posX * texturesSizeHorizontal - (penSize / 2));
        int y = (int)(posY * texturesSizeVertical - (penSize / 2));

        //If hand is in contact with the whiteboard, start drawing.
        if (touchingLast)
        {
            texture.DrawCircle(color, x, y, penSize);

            //If we move our finger too fast on the whiteboard, Update can't keep
            //up and our line looks choppy.
            //This loop allows us to interpolate between those points using Lerp.
            for (float t = 0.01f; t < 1.00f; t += 0.01f)
            {
                int lerpX = (int)Mathf.Lerp(lastX, (float)x, t);
                int lerpY = (int)Mathf.Lerp(lastY, (float)y, t);
                texture.DrawCircle(color, lerpX, lerpY, penSize);
            }

            texture.Apply();

        }

        //Set lastX and lastY coordinates for filling the space between the points
        //placed on the whiteboard.
        this.lastX = (float)x;
        this.lastY = (float)y;

        this.touchingLast = this.touching;

    }

    public void DrawToPoint(out int x, out int y, float lastX, float lastY, float posX, float posY, bool touchingLast, Color color)
    {
        //DrawCircle method draws a circle from the top left of given coordinates, 
        //but we want the circle to be centered at the given coordinates.
        x = (int) (posX * texturesSizeHorizontal - (penSize / 2));
        y = (int) (posY * texturesSizeVertical - (penSize / 2));
       
        //string logMessage = String.Format("{0}, {1}, {2}",  DateTime.Now, posX, posY); 
        //Debug.LogWarning(logMessage);

        //If hand is in contact with the whiteboard, start drawing.
        if (touchingLast)
        {
            texture.DrawCircle(color, x, y, penSize);

            //If we move our finger too fast on the whiteboard, Update can't keep
            //up and our line looks choppy.
            //This loop allows us to interpolate between those points using Lerp.
            for (float t = 0.01f; t < 1.00f; t += 0.01f)
            {
                int lerpX = (int) Mathf.Lerp(lastX, (float) x, t);
                int lerpY = (int) Mathf.Lerp(lastY, (float) y, t);
                texture.DrawCircle(color, lerpX, lerpY, penSize);
            }

            texture.Apply();
        }
    }

    //ToggleTouch allows the WhiteboardPen.cs script to tell
    //the whiteboard if the user is touching the whiteboard.
    public void ToggleTouch(bool touching)
    {
        this.touching = touching;
    }

    public bool GetTouch()
    {
        return this.touching;
    }

    //SetTouchPosition takes in the coordinates at which our whiteboard
    //pen intersects the board.
    public void SetTouchPosition(float x, float y)
    {
        this.posX = x;
        this.posY = y;
        
    }

    public void SetColor(Color color)
    {
        this.color = color;
    }

}
