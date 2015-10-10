using UnityEngine;
using System.Collections;

public class Move : MonoBehaviour {
	Vector3 dir = Vector3.zero;
	public float speed = 300f;
	public Rigidbody rb;
	Vector3 start = new Vector3(1.3f,.3f,1);

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody> ();


	
	}
	
	// Update is called once per frame
	void Update () {
		dir.x = Input.acceleration.x*6;
		dir.z = Input.acceleration.y*6;
		/*if (dir.sqrMagnitude > 1) {
			dir.Normalize();
		}*/
		dir *= Time.deltaTime;
		rb.AddForce(dir * speed);
	}

	void OnCollisionEnter(Collision other){
		if(other.gameObject.tag=="tile"){
			other.gameObject.GetComponent<Renderer>().material.color = Color.green;
			Debug.Log("Here");
		}
		if (other.gameObject.tag == "spike") {
			this.transform.position = start;
			Debug.Log ("Spike");
		}
	}
}

