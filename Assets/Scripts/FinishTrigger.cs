using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishTrigger : MonoBehaviour{

    void OnTriggerEnter(Collider other){
        if(other.tag == "Player"){
            other.GetComponent<PlayerMovement>().Finish();
        }
    }

}
