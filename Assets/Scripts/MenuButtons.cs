using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public enum Cases
{
    C1, C2
}

public class MenuButtons : MonoBehaviour
{
    public static Cases CurrentCase;
    
    // Start is called before the first frame update
    void Start()
    {
        foreach (var btn in GetComponentsInChildren<Button>())
        {
            // If button is called "QUIT" assigned Application.Quit
            if (btn.name == "QUIT")
            {
                btn.onClick.AddListener(delegate { Application.Quit(0); });
            }
            // Try to convert name to correct enum
            else if (Enum.TryParse(btn.name, out Cases c))
            {
                btn.onClick.AddListener(delegate { Init(c); });
            }
            // Button is not recognized
            else
            {
                Debug.Log("Unrecognized button positioned in panel");
            }
        }
    }
    
    // Load next scene and assign case
    public void Init(Cases c) {
        MenuButtons.CurrentCase = c;
        SceneManager.LoadScene(1, LoadSceneMode.Single);
    }
    
}