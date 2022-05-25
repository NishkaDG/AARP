using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public enum Cases
{
    C1, C2, C3, C4
}

public static class Settings
{
    public static readonly Color NormalColor = Color.black;
    public static readonly Color RecordingColor = Color.red;

    public static readonly Dictionary<Cases, string> UserCaptureFiles = new()
    {
        {Cases.C1, "UserCapture/Shapes"},
        {Cases.C2, "UserCapture/Math"},
        {Cases.C3, "UserCapture/Shapes"},
        {Cases.C4, "UserCapture/Math"}
    };
    
    public static readonly Dictionary<string, Dictionary<Cases, bool>> WhiteboardPlaybackState = new()
    {
        {"User Wall", new() {
            {Cases.C1, false},
            {Cases.C2, true},
            {Cases.C3, true},
            {Cases.C4, true}
        }},
        {"Dummy Wall", new() {
            {Cases.C1, true},
            {Cases.C2, true},
            {Cases.C3, false},
            {Cases.C4, false}
        }},
    };
}