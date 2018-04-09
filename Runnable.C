#include <stdio.h>
#include<limits.h>

void main(void)
{
/*
/******************Array and Variable Declarations**************\
*/
  char Attempt[7][7];//filled with null?
  char inUse[7];
  int rotateCounter = 0;
/*int checkSide1;
  int checkSide2;
  int checkSide3;
  int checkSide4;
  int checkSide5;
  int checkSide6;*/

//first six in each are node sides from top side clockwise. The next six are there strictly for ease of "rotation"

  int node0[12] = {2,3,5,1,4,6,2,3,5,1,4,6};
  int node1[12] = {3,2,4,1,6,5,3,2,4,1,6,5};
  int node2[12] = {1,6,2,4,5,3,1,6,2,4,5,3};
  int node3[12] = {1,4,3,6,5,2,1,4,3,6,5,2};
  int node4[12] = {4,5,6,1,2,3,4,5,6,1,2,3};
  int node5[12] = {2,5,3,1,6,4,2,5,3,1,6,4};
  int node6[12] = {5,4,3,2,1,6,5,4,3,2,1,6};

//initializing and declaration of pointers for pointer array
  int * n0p = node0[0];
  int * n1p = node1[0];
  int * n2p = node2[0];
  int * n3p = node3[0];
  int * n4p = node4[0];
  int * n5p = node5[0];
  int * n6p = node6[0];

  //points to first element of each node
  //WILL NOT CHANGE ORDER
  //IS THIS NEEDED?
  int *nodes[7] = (node0, node1, node2, node3, node4, node5, node6);

  //THIS WILL CONTROL THE ORDER OF WHAT WE EVENTUALLY PRINT
  int *printTracker[7] = (node0, node1, node2, node3, node4, node5, node6);
  //keeps track of what position the nodes will need to be placed in.
  int nodePos = 0;

/******************Begin Drive Ya' Nuts*************************/

  while(nodePos != 8)
  {
      switch(nodePos) //assigns which sides need to be checked
      {

        case nodePos == 0:
            //no checking needed
            break;

        case nodePos == 1:
            //Pos0, top right MATCH pos1 bottom left
            //while sides don't match AND Attempts[x] != 'C'
                //rotate();
            break;
                                                                      //USE FAUX BOOL TO SAY IF SIDES MATCH OR NOT
        case nodePos == 2:
            //POS0 bottom right MATCH Pos2 top left
             //Pos1 bottom MATCH Pos2 top
            break;

        case nodePos == 3:
            //pos0 bottom MATCH Pos3 top
             //pos2 bottom left match Pos3 top right
            break;

        case nodePos == 4:
            //Pos0 bottom left MATCH POs 4 top right
              //Pos 3 top left MATCH POS4 bottom right
            break;

        case nodePos == 5:
            //Pos0 top left MAtch Pos 5 bottom right
              //Pos4 top match Pos5 bottom
            break;

        case nodePos == 6:
            //Pos0 top match Pos6 bottom
              //Pos5 top right match Pos6 bottom left
             //POS1 top left MATCH Pos6 Bottom right
            break;



         default : /* Optional */
         statement(s);
    }//switch
  }//loop

  //PRINT OUT


//THIS ALGORITHM STILL NEEDS SOME WAY TO KEEP TRACK OF WHICH NODE IS WHERE.
//ALSO NEEDS TO WORK OUT HOW


  //use nodePos to do switch stmt to match/check sides -->Elaborate

  //WHILE SIDES DO NOT MATCH
      //Rotate until at least 1 match is found.  --> Will need method
    //IF ALL NECESSARY SIDES MATCH
        //increment nodePos
        //mark node as attempted in Attempted[]
        //mark node as inUse
        //loop back to 61
    //IF SOME SIDE(s) MATCH (BUT NOT ALL)
        //mark as Attempted[]
        //FIND NEXT AVAILABLE NODE --> Needs elaboration
        //IF FOUND
            //loop back to 61
        //IF Attempts[] row is completely full      --> will need to have some kind of metric for keeping track
            //decrement nodePos
            //clear entire Attempts[] row
            //update inUse                          --> Make sure this is done where it needs to be done
            //Loop back to 61






}



