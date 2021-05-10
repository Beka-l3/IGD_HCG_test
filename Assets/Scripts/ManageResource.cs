using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ManageResource : MonoBehaviour{
    public static int diamondAmount;
    public Text diamondText;

    private int currentSceneDiamondAmount;
    private int multiplier;

    void Start(){
        currentSceneDiamondAmount = 0;
        multiplier = 0;
        diamondText.text = diamondAmount.ToString();
    }

    public void DiamondCollected(){
        currentSceneDiamondAmount++;
        diamondAmount++;
        diamondText.text = diamondAmount.ToString();
    }

    public void IncreaseFinishingMultiplier(){
        multiplier++;
        if(multiplier == 6) multiplier = 10;
    }

    public void FinishingMultiplier(){
        if(multiplier == 0) multiplier++;
        diamondAmount += currentSceneDiamondAmount * (multiplier-1);
        diamondText.text = diamondAmount.ToString();
    }
}
