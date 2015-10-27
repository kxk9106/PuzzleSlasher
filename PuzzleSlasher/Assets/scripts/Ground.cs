using UnityEngine;
using System.Collections;
using System.Collections.Generic; //for list

public class Ground : MonoBehaviour {

	public GameObject tilePrefab;
	public GameObject ball;
	public GameObject spike;
	Vector3 start = new Vector3(-4.2f,.16f,-11.2f);
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
    //accessor for tiles list
    public List<GameObject> getTiles()
    {
        return tiles;
    }//accessor

	public GameObject[] spikes;

	void Awake(){
		//sets up maze attributes
		maze = GameObject.FindGameObjectWithTag ("maze");
		maze.SetActive (true);
		xMaze = maze.transform.position.x;
		zMaze = maze.transform.position.z;
		//xMazeSize = maze.gameObject.GetComponent<Renderer>().bounds.size.x;
		//zMazeSize = maze.gameObject.GetComponent<Renderer>().bounds.size.z;
		xMazeSize = 18 * 0.55f;
		zMazeSize = 22 * 0.55f;
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
		//GameObject.Instantiate (ball, ballPos, Quaternion.identity);
	
		//makes the floor with tiles
		//tiles = new List<GameObject> ();
		for(float i = xStart; i < xEnd; i=i + xMazeSize/18){
			for(float j = zStart; j < zEnd; j=j+zMazeSize/22){
				Vector3 pos = new Vector3(i + .275f,0,j + .275f);
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
