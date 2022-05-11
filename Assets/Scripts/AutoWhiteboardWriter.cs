using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoWhiteboardWriter : MonoBehaviour
{
    //private float[] xs = {0.0f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f};
    //private float[] ys = {0.0f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f};
    private ArrayList points = new ArrayList();
    private int currentIndex = 0;
    public Whiteboard whiteBoard;

    private float lastX, lastY;

    private Color color;
    // Start is called before the first frame update
    void Start()
    {
        this.lastX = 0.0f;
        this.lastY = 0.0f;
        TextAsset f = (TextAsset)Resources.Load("UserCapture/userCapture");
        String fileText = System.Text.Encoding.UTF8.GetString(f.bytes);
        string[] csvRows = fileText.Split("\n");
        foreach (var row in csvRows)
        {
            var row2 = row.Split(",");
            float x = float.Parse(row2[0]);
            float y = float.Parse(row2[1]);
            bool newLine = bool.Parse(row2[2]);
            points.Add((x, y, newLine));
        }
        Debug.LogWarning(fileText);
        this.color = Color.black;
    }

    // Update is called once per frame
    void Update()
    {
        if (currentIndex < points.Count)
        {
            var point = (ValueTuple<float, float, bool>) points[currentIndex];
            float posX = point.Item1;
            float posY = point.Item2;
            bool newLine = point.Item3;
            whiteBoard.DrawToPoint(out var x, out var y, this.lastX, this.lastY, posX, posY, !newLine,this.color);
            this.lastX = x;
            this.lastY = y;
            currentIndex += 1;
        }
        
        

    }
}
