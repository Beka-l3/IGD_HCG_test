using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurnTriggerScript : MonoBehaviour{

    private void OnTriggerEnter(Collider other){
        int TurnFactor = 1;

        if(gameObject.tag == "TurnLeft")
            TurnFactor = -1;

        if(other.tag == "Player")
            other.GetComponent<PlayerMovement>().TurnTrigger(TurnFactor);
    }
}
