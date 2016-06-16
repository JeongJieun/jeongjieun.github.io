using UnityEngine;
using System.Collections;

public class cameracontrol : MonoBehaviour {
    GameObject player;
    Vector3 offset;
	// Use this for initialization
	void Start () {
        player = GameObject.FindWithTag("player");
        offset = player.transform.position - transform.position;
	}
	
	// Update is called once per frame

	

    void LateUpdate () {
        transform.position = player.transform.position - offset;
    }
}
