using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;

public class PlayerMovement : MonoBehaviour {

    public float speed = 1f;
    public GameObject restartBtn;
    public GameObject restartBtnIcon;
    public GameObject hover;

    private CharacterController myCharacterController;
    private Vector3 turningDirection;
    private Vector2 firstTouch;
    private Vector2 touchData;
    private bool isFinish;
    private bool lost;

    void Start(){
        myCharacterController = GetComponent<CharacterController>();
        turningDirection = transform.forward;
        isFinish = false;
        lost = false;
    }

    void Update(){
        if(isFinish || lost) return;

        myCharacterController.Move(transform.forward * speed * Time.deltaTime);

        if(transform.forward != turningDirection)
            TurnTheObject(turningDirection);

        if(Input.GetMouseButtonDown(0)){
            firstTouch = Input.mousePosition;
        }
        else if(Input.GetMouseButton(0)){
            touchData = Input.mousePosition;
            float difference = (touchData.x - firstTouch.x);

            myCharacterController.Move(transform.right * difference * Time.deltaTime);            
            firstTouch = Input.mousePosition;
        }
    }
    
    public void TurnTrigger(int turnFactor){
        turningDirection = turnFactor * transform.right;
    }

    public void RiseOne(){
        myCharacterController.Move(transform.up * 1.05f); 
    }
    public void FallOne(){
        myCharacterController.Move( -transform.up * 1.05f); 
    }
    public void FallABit(){
        myCharacterController.Move( -transform.up * 0.05f);
    }

    public void Finish(){
        isFinish = true;
        hover.SetActive(true);
        restartBtn.SetActive(true);
        restartBtnIcon.SetActive(false);
        Camera.main.GetComponent<CameraTrail>().RotateCamera();
        // Debug.Log("Finish");
    }
    public void Lost(){
        lost = true;
        hover.SetActive(true);
        restartBtn.SetActive(true);
        restartBtnIcon.SetActive(false);
        // Debug.Log("Lost");
    }

    private void TurnTheObject(Vector3 turningDir){
        transform.forward += turningDir * Time.deltaTime * speed / 2.5f;
    }
}
