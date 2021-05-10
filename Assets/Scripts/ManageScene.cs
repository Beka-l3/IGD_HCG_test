using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ManageScene : MonoBehaviour{
    private string sceneName = "SampleScene";
    public void RestartScene(){
        SceneManager.LoadScene(sceneName);
    }
}
