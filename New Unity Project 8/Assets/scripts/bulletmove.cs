using UnityEngine;
using System.Collections;

public class bulletmove : MonoBehaviour {
    public float moveSpeed = 10f;
    public float destoryTime = 2f;
	// Use this for initialization
	void Start () {
        Destroy(gameObject, 3f);
	}
	
	// Update is called once per frame
	void Update () {
        transform.Translate(0, 0, moveSpeed * Time.deltaTime);
	}
}
