using UnityEngine;
using System.Collections;
using System.Collections.Generic; //for list

public class Ground : MonoBehaviour {

	public GameObject tilePrefab;
	public GameObject ball;
	Vector3 start = new Vector3(1.3f,.3f,1);

	public List<GameObject> tiles;

	// Use this for initialization
	void Start () {
		Vector3 ballPos = start;
		GameObject ba = (GameObject)GameObject.Instantiate (ball, ballPos, Quaternion.identity);

		tiles = new List<GameObject> ();
		for(float i = -2.09f; i < 2.22f; i=i+.5375f){
			for(float j = -3.8f; j < 3.8f; j=j+.5375f){
				Vector3 pos = new Vector3(i,0,j);
				GameObject ti = (GameObject)GameObject.Instantiate(tilePrefab,pos,Quaternion.identity);
				tiles.Add(ti);
			}
		}
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}


}
