using UnityEngine;
using System.Collections;
using System.Collections.Generic; //for list


public class Move : MonoBehaviour {
	Vector3 dir = Vector3.zero;
	public float speed = 300f;
	public Rigidbody rb;
	public bool blackTiles;
	Vector3 start = new Vector3(1.0f,.16f,-7f);
	public GameObject[] tiles;

	public List<Color> colors;

    //score - to determine level
    public int score = 0;
    //walldrop obj
    WallDrop wallDrop = new WallDrop();

	void Awake(){
		Color green = new Color (43, 232, 0);
		colors.Add (green);
		Color purple = new Color (83, 0, 255);
		colors.Add (purple);
		Color orange = new Color (255, 169, 0);
		colors.Add (orange);
		Color pink = new Color (232, 0,134);
		colors.Add (pink);
		Color blue = new Color (0, 194, 255);
		colors.Add (blue);
	}

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody> ();
	

	
	}
	
	// Update is called once per frame
	void Update () {
		dir.x = -Input.acceleration.x*6;
		dir.z = -Input.acceleration.y*6;
		/*if (dir.sqrMagnitude > 1) {
			dir.Normalize();
		}*/
		dir *= Time.deltaTime;
		rb.AddForce(dir * speed);
	}

	void OnCollisionEnter(Collision other){
		if(other.gameObject.tag=="tile"){
			Debug.Log(colors.Count);
			other.gameObject.GetComponent<Renderer>().material.color = colors[Random.Range(0,(colors.Count))];
			Debug.Log("Here");
		}//if
		if (other.gameObject.tag == "spike") {
			this.transform.position = start;
			Debug.Log ("Spike");
			tiles = GameObject.FindGameObjectsWithTag ("tile");
			foreach(GameObject tile in tiles){
				tile.gameObject.GetComponent<Renderer>().material.color = Color.black;
			}//foreach

		}//if
        //if it hits the goal
        if (other.gameObject.tag == "goal")
        {
            //move the ball back
            this.transform.position = start;
            Debug.Log("Goooooooooooooooooooooooooooooooaaaaaaaaaaaaaaaaaaaaaaaal");
            //reset all the tiles
            tiles = GameObject.FindGameObjectsWithTag("tile");
            foreach (GameObject tile in tiles)
            {
                tile.gameObject.GetComponent<Renderer>().material.color = Color.black;
            }//foreach
            //move the wall back
            if (wallDrop.isDown == true)
            {
                //do that here tom//////////////////////////////
                //
            }//if
            //increment the score
            score++;
        }//if
    }
}

