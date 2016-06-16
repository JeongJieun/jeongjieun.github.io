using UnityEngine;
using System.Collections;

public class playershoot : MonoBehaviour {
    public GameObject bulletprefab;
    float delayTimer = 0f;
    public float shootDelayTime = 1f;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
        delayTimer += Time.deltaTime;
        if (Input.GetButtonDown("Jump") && delayTimer > shootDelayTime) {
            Instantiate(bulletprefab, transform.position, transform.rotation);
            delayTimer = 0f;
        }
	}
}
