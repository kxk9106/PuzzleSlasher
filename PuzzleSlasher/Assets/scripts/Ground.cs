﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic; //for list

public class Ground : MonoBehaviour {

	public GameObject tilePrefab;
	public GameObject ball;
	public GameObject spike;
	Vector3 start = new Vector3(1.0f,.16f,-7f);
	public float xMaze;
	public float zMaze;
	public float xMazeSize;
	public float zMazeSize;
	public GameObject maze;
	public float xStart;
	public float xEnd;
	public float zStart;
	public float zEnd;

	public List<GameObject> tiles;
	public GameObject[] spikes;

	void Awake(){
		maze = GameObject.FindGameObjectWithTag ("maze");
		maze.SetActive (true);
		xMaze = maze.transform.position.x;
		zMaze = maze.transform.position.z;
		//xMazeSize = maze.gameObject.GetComponent<Renderer>().bounds.size.x;
		//zMazeSize = maze.gameObject.GetComponent<Renderer>().bounds.size.z;
		xMazeSize = 9;
		zMazeSize = 11;
		xStart = xMaze - xMazeSize / 2;
		xEnd = xMaze + xMazeSize / 2;
		zStart = zMaze - zMazeSize / 2;
		zEnd = zMaze + zMazeSize / 2;
		
		Debug.Log ("start" + xStart);
		Debug.Log ("end" + xEnd);
	}

	// Use this for initialization
	void Start () {
		Vector3 ballPos = start;
		GameObject ba = (GameObject)GameObject.Instantiate (ball, ballPos, Quaternion.identity);
	

		tiles = new List<GameObject> ();
		for(float i = xStart; i < xEnd; i=i + xMazeSize/20){
			for(float j = zStart; j < zEnd; j=j+zMazeSize/16){
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
