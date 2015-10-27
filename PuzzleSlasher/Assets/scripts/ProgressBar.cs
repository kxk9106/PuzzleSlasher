using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic; //for list


public class ProgressBar : MonoBehaviour {

	public GameObject mov;
	public Image progressBar;
	public GameObject[] tiles;
	public Move movw;
	
	// Use this for initialization
	void Start () {
		mov = GameObject.FindGameObjectWithTag ("ball");
	//	m = FindObjectOfType(typeof(Move));
		//movw = (Move)mov.GetComponent (typeof(Move));
		movw = mov.GetComponent<Move> ();

		tiles = GameObject.FindGameObjectsWithTag ("tile");

		progressBar.fillAmount = 0.0f;
	}
	
	// Update is called once per frame
	void Update () {
		movw = mov.GetComponent<Move> ();

		Debug.Log ("wierjij" + movw.ColoredTiles);
		//progressBar.fillAmount = m.coloredTiles*4 / m.numTiles;
	}


}
