using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoxScript : MonoBehaviour{
   
    public GameObject player;
    public float inLavaLimit = 0.25f;
    public GameObject eventSys;

    private bool withPlayer;
    private bool firstBox;
    private bool inLava;
    private float inLavaTimer;
    private float joinPlayerTimer = 0.1f;
    private float leavePlayerTimer = 0.3f;

    void Start(){
       if(gameObject.name == "FirstBox"){
           withPlayer = true;
           firstBox = true;
       }
       else{
           withPlayer = false;
           firstBox = false;
       }
       inLava = false;
       inLavaTimer = 0;
    }

    void Update(){
        if(inLava){
            inLavaTimer += Time.deltaTime;
            if(inLavaTimer > inLavaLimit){
                player.GetComponent<PlayerMovement>().FallOne();
                if (firstBox) player.GetComponent<PlayerMovement>().Lost();
                Destroy(gameObject);
            }
        }
    }

    IEnumerator JoinPlayer(){
        player.GetComponent<PlayerMovement>().RiseOne();
        yield return new WaitForSeconds(joinPlayerTimer);

        transform.position = new Vector3(player.transform.position.x , transform.position.y, player.transform.position.z);
        transform.rotation = player.transform.rotation;
        transform.SetParent(player.transform);
    }

    IEnumerator LeavePlayer(bool atFinish){
        transform.SetParent(null);
        yield return new WaitForSeconds(leavePlayerTimer);

        if(atFinish) player.GetComponent<PlayerMovement>().FallABit();
        else player.GetComponent<PlayerMovement>().FallOne();

        if (firstBox) player.GetComponent<PlayerMovement>().Lost();
    }

    void OnTriggerEnter(Collider other){
        if(other.tag == "Box"){
            if(!withPlayer){
                withPlayer = true;
                StartCoroutine(JoinPlayer());
            }  
            else{
                other.isTrigger = true;
            }
        }
        else if(other.tag == "Wall" || other.tag == "FinishStep"){
            if(withPlayer){
                withPlayer = false;
                if(other.tag == "Wall") StartCoroutine(LeavePlayer(false));
                else{
                    // Debug.Log(other);
                    if(!firstBox) eventSys.GetComponent<ManageResource>().IncreaseFinishingMultiplier();
                    StartCoroutine(LeavePlayer(true));
                    Camera.main.GetComponent<CameraTrail>().IncreaseFinishOffset();
                }
            }
        }
        else if(other.tag == "Lava"){
            inLava = true;
        }
    }

    void OnTriggerExit(Collider other){
        if(other.tag == "Lava"){
            inLava = false;
            inLavaTimer = 0f;
        }
    }

}
