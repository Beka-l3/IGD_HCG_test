using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DiamondScript : MonoBehaviour{

    public Text diamondTxt;
    public GameObject eventSys;

    private int yFacrot;
    private float elapsed;
    private float rnd;
    private bool collected;

    void Start(){
        yFacrot = -1;
        rnd = (Random.value + 5) * 10;
        collected = false;
    }

    void Update(){
        transform.Rotate(Time.deltaTime * rnd, Time.deltaTime * rnd, 0, Space.Self);
        
        elapsed += Time.deltaTime;
        if (elapsed >= 1f) {
            elapsed = elapsed % 1f;
            if(yFacrot == -1) yFacrot = 1;
            else yFacrot = -1;
        }

        transform.position += new Vector3(0f, yFacrot * Time.deltaTime / 2, 0f);
    }

    void OnTriggerEnter(Collider other){
        if(collected) return;
        collected = true;
        
        eventSys.GetComponent<ManageResource>().DiamondCollected();
        Destroy(gameObject);
    }
}
