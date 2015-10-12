using UnityEngine;
using System.Collections;
using System.Collections.Generic; //for list

public class Ground : MonoBehaviour {

	public GameObject tilePrefab;
	public GameObject ball;
	public GameObject spike;
	Vector3 start = new Vector3(2.7f,.16f,-7f);

	public List<GameObject> tiles;
	public GameObject[] spikes;

	// Use this for initialization
	void Start () {
		Vector3 ballPos = start;
		GameObject ba = (GameObject)GameObject.Instantiate (ball, ballPos, Quaternion.identity);

		tiles = new List<GameObject> ();
		for(float i = -3.09f; i < 3.62f; i=i+.5375f){
			for(float j = -11.8f; j < -.9f; j=j+.5375f){
				Vector3 pos = new Vector3(i,0,j);
				GameObject ti = (GameObject)GameObject.Instantiate(tilePrefab,pos,Quaternion.identity);
				tiles.Add(ti);
			}
		}
		spikes = GameObject.FindGameObjectsWithTag ("spike");
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}


}
