//Audrey Meadows
#include <stdio.h>
#include<limits.h>

void main(void)
{
/*
/*********************Array and Variable Declarations*******************\
*/
  //Attempt[position][node]
  char Attempt[7][7];

  char inUse[7] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL};

  //tracks what rotation the node is at when it worked
  //int rotateCounter = 0;

//first six in each are node sides from top side clockwise. Index 7 is to identify for technical reasons
  int node0[6] = {2,3,5,1,4,6,0};
  int node1[6] = {3,2,4,1,6,5,1};
  int node2[6] = {1,6,2,4,5,3,2};
  int node3[6] = {1,4,3,6,5,2,3};
  int node4[6] = {4,5,6,1,2,3,4};
  int node5[6] = {2,5,3,1,6,4,5};
  int node6[6] = {5,4,3,2,1,6,6};

  //identifies which node we're on
  int nodeNum = 0;
  int nodeLabeler [7] =   //keeps track of what position the nodes are in
  int * nodeTracker[7] = {node0, NULL, NULL, NULL, NULL, NULL, };

  //keeps track of what position the nodes will need to be placed in.
  int nodePos = 0;
  node

/*************************Begin Drive Ya' Nuts*************************/

  //The initial starting node for the nodePos to look at AFTER INCREMENTING is the node directly after the one placed

  //The initial starting node for the nodePos to look at AFTER DECREMENTING is the next available node, IF ANY



  //STILL NEEDS TO HAVE NODES "PLACED"
  while(nodePos != 7)
  {
      switch(nodePos) //assigns which sides need to be checked
      {

        case nodePos == 0:
            //no checking needed
            Attempt[nodePos][nodeNum % 7]
            nodeNum++;
            nodePos++;
            break;

        case nodePos == 1:
            //Pos0, top right MATCH pos1 bottom left

            //Rotate until at least 1 match is found.
            while(nodeTracker[0][1] != nodeTracker[1][4])
            {
              //rotate
            }

            Attempt[nodePos][nodeNum%7]
            nodePos++;
            break;

        case nodePos == 2:
            //POS0 bottom right MATCH Pos2 top left
             //Pos1 bottom MATCH Pos2 top
             while(nodeTracker[0][2] != nodeTracker[2][5] && nodeTracker[1][3] != nodeTracker[2][0]))
             {
               //rotate
             }
            break;

        case nodePos == 3:
            //pos0 bottom MATCH Pos3 top
             //pos2 bottom left match Pos3 top right
            while(nodeTracker[0][3] != nodeTracker[3][0] && nodeTracker[2][4] != nodeTracker[3][1])
            {
              //rotate
            }
            break;

        case nodePos == 4:
            //Pos0 bottom left MATCH POs 4 top right
              //Pos 3 top left MATCH POS4 bottom right
            while(nodeTracker[0][4] != nodeTracker[4][1] && nodeTracker[3][5] != nodeTracker[4][2])
            {
              //rotate
            }
            break;
















        case nodePos == 5:
            //No sides match
            while(nodeTracker[0][5] != nodeTracker[5][2] && nodeTracker[4][0] != nodeTracker[5][3])
            {
              //rotate
            }
            //All sides match
            if(nodeTracker[0][5] == nodeTracker[5][2] && nodeTracker[4][0] == nodeTracker[5][3])
            {
              Attempt[nodePos][nodeNum % 7];
              inUse[nodeNum % 7] = 'T';
              nodePos++;
            }
            else //not all, but some sides match
            {
              Attempt[nodePos][nodeNum % 7];
              //FIND NEXT AVAILABLE NODE


            }
            break;



























        case nodePos == 6:
            //Pos0 top match Pos6 bottom
              //Pos5 top right match Pos6 bottom left
             //POS1 top left MATCH Pos6 Bottom right
            while(nodeTracker[0][0] != nodeTracker[6][3] && nodeTracker[5][1] != nodeTracker[6][4]  && nodeTracker[1][5] != nodeTracker[6][2])
            {
              //rotate
            }
            break;

         default :
         System.out.print("Something terrible has happened...");
    }//switch
  }//loop

  //PRINT OUT

}//main

