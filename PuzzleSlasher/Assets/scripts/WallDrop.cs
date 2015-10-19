using UnityEngine;
using System.Collections;
using System.Collections.Generic; //for list

public class WallDrop : MonoBehaviour {

    public Move move;
    public Ground ground;
    public int numColored; //number of tiles colored
    public int numTotal; //number of tiles in total
    public float percentColored; //percentage of tiles colored in decimal form
    public const float goal = 0.50f;
    public bool isDown = false;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
        //get the number of the tiles
        numColored = move.tiles.Length;
        numTotal = ground.tiles.Count;

        //do the math
        percentColored = numColored / numTotal;

        //check if enough of the map is colored
        if(percentColored >= goal)
        {
            //move the wall
            transform.Translate(new Vector3(0, -0.1f * Time.deltaTime, 0));

            isDown = true;
        }//if


	}
}
