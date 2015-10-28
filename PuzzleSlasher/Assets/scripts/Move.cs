using UnityEngine;
using System.Collections;
using System.Collections.Generic; //for list
using UnityEngine.UI;


public class Move : MonoBehaviour {
	Vector3 dir = Vector3.zero;
	public float speed = 300f;
	public Rigidbody rb;
	public bool blackTiles;
	Vector3 start = new Vector3(-4.2f,.16f,-11.2f);
	public GameObject[] tiles;
	public Image progressBar;
    //public PhysicMaterial material;/// <summary>//////////////


	public List<Color> colors;

    //score - to determine level
    public int score;

    //walldrop obj
    WallDrop wallDrop = new WallDrop();
	float coloredTiles;
	float numTiles;
	float levelThreshold;
	GameObject[] wall;
	Vector3 wallLoc = new Vector3(3.6f, 0.29f, -6.0f);

	Text meow;



	void Awake(){
		//adds new colors to color list for tiles
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



		rb = GetComponent<Rigidbody> ();
		wall = GameObject.FindGameObjectsWithTag ("gate");
		coloredTiles = 0;
		levelThreshold = .10f;
		score = 0;


	}

	// Use this for initialization
	void Start () {

		meow = GameObject.Find("Direction").GetComponent<Text>();
		meow.text = "Fill 20% of tiles";
	}


	
	// Update is called once per frame
	void Update () {

		tiles = GameObject.FindGameObjectsWithTag ("tile");
		numTiles = tiles.Length;
		Debug.Log("tiles: " + tiles.Length);

		progressBar.fillAmount = coloredTiles * 10 / numTiles;

		//movement through phone tilt
		dir.x = -Input.acceleration.x*6;
		dir.z = -Input.acceleration.y*6;

		if (score == 1) {
			//dir.x += -.5f * 6;
			meow.text = "reverse controls";
            //bouncy walls and shit
            //1
            //GetComponent<Collider>().GetComponent<PhysicMaterial>().bounciness = 1;
            //GetComponent<Collider>().collider.
            //GetComponent<PhysicMaterial>().bounciness = 1;
            dir.x = -dir.z;
            dir.z = -dir.x;

        }
		if (score == 2) {
			dir.z += -.5f * 6;
			meow.text = "Heavy Northern Wind";

		}
		if (score == 3) {
			dir.x += .5f *6;
			meow.text = "Heavy Western Wind";

		}

		if (score == 4) {
			dir.z += .5f * 6;
			meow.text = "Heavy Southern Wind";

		}

		/*if (dir.sqrMagnitude > 1) {
			dir.Normalize();
		}*/
		dir *= Time.deltaTime;
		rb.AddForce(dir * speed);

		//bounds hard coded for now
		if (transform.position.x <= -4.6) {
			newPositionX(-4.4f);
		}
		if (transform.position.x >= 4.7) {
			newPositionX(4.13f);
		}
		if (transform.position.z >= .04) {
			newPositionZ(-.85f);
		}
		if (transform.position.z <= -11.6) {
			newPositionZ(-11.23f);
		}

		if ((coloredTiles / numTiles) < levelThreshold) {
			coloredTiles = 0;
			//check the amount of colored tiles
			foreach (GameObject tile in tiles) {
				if (tile.gameObject.GetComponent<Renderer> ().material.color != Color.black) {
					coloredTiles++;
				}
			}
		} 
		else {
			wall[0].transform.Translate(new Vector3(0, -0.1f * Time.deltaTime, 0));
			wall[0].GetComponent<Renderer>().material.color = colors[Random.Range(0,(colors.Count))];
		}
	}

	void newPositionX(float x){
		transform.position = new Vector3 (x, transform.position.y,transform.position.z);
	}
	void newPositionZ(float z){
		transform.position = new Vector3 (transform.position.x, transform.position.y,z);
	}

	void OnCollisionEnter(Collision other){
		//if ball goes over tile -> changes color
		if(other.gameObject.tag=="tile"){
			Debug.Log(colors.Count);
			other.gameObject.GetComponent<Renderer>().material.color = colors[Random.Range(0,(colors.Count))];
			Debug.Log("Here");
		}//if ball hits spike -> resets to start pos/resets tiles
		if (other.gameObject.tag == "spike") {
			this.transform.position = start;
			Debug.Log ("Spike");
			//resets all tiles to black
			foreach(GameObject tile in tiles){
				tile.gameObject.GetComponent<Renderer>().material.color = Color.black;
			}//foreach
			// reset gate location
			wall[0].transform.position = wallLoc;
		}//if


        //if it hits the goal
        if (other.gameObject.tag == "goal")
        {
            //move the ball back
            this.transform.position = start;
            Debug.Log("Gooooooooooooaaaaaal");
            //reset all the tiles
            tiles = GameObject.FindGameObjectsWithTag("tile");
            foreach (GameObject tile in tiles)
            {
                tile.gameObject.GetComponent<Renderer>().material.color = Color.black;
            }//foreach

            //move the wall back
			// reset gate location
			wall[0].transform.position = wallLoc;
			coloredTiles = 0;
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

