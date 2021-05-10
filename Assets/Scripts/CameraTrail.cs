using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraTrail : MonoBehaviour{
    public Transform target;
    public float heightOffset = 10.0f;
    public float rightOffset = 3.0f;
    public float distanceOffset = 15f;
    public GameObject cameraRotator;

    private float finishOffset;
    private Vector3 cameraNewPosition;
    private Vector3 lookAtPosition;
    private bool isRotateCamera;
    
    void Start(){
        finishOffset = 0f;
        isRotateCamera = false;
    }
    void Update(){
        if(isRotateCamera){
            cameraRotator.transform.Rotate(0f, 50 * Time.deltaTime, 0f);
            lookAtPosition = target.transform.position + new Vector3(0f, 5f, 0f);
        }
        else{
            cameraNewPosition = target.position - target.forward * distanceOffset + target.right * rightOffset + target.up * heightOffset;
            cameraNewPosition -= new Vector3(0f, target.position.y - finishOffset, 0f); 
            transform.position = Vector3.Lerp(transform.position, cameraNewPosition, Time.deltaTime*10);
            lookAtPosition = gameObject.transform.position + target.transform.forward - target.transform.right/10 - target.transform.up/10;
        }
        
        transform.LookAt(lookAtPosition);
    }

    public void IncreaseFinishOffset(){
        finishOffset += 0.5f;
    }

    public void RotateCamera(){
        transform.SetParent(cameraRotator.transform);
        isRotateCamera = true;
    }
}
