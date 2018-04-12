//Audrey Meadows
#include <stdio.h>
#include<limits.h>

int main(void)
{
/*
/*********************Array and Variable Declarations*******************\
*/
  //Attempt[position][node]
  char Attempt[7][7];
  char inUse[7] = {'F', 'F', 'F', 'F', 'F', 'F', 'F'};

  //tracks what rotation the node is at when it worked
  //int rotateCounter = 0;

//first six in each are node sides from top side clockwise.
  int node0[6] = {2,3,5,1,4,6};
  int node1[6] = {3,2,4,1,6,5};
  int node2[6] = {1,6,2,4,5,3};
  int node3[6] = {1,4,3,6,5,2};
  int node4[6] = {4,5,6,1,2,3};
  int node5[6] = {2,5,3,1,6,4};
  int node6[6] = {5,4,3,2,1,6};
  int * nodes[7] = {node0, node1, node2, node3, node4, node5, node6};

//identifies which node we're on
  int nodeNum = 0;
  int * nodeTracker[7] = {node0, NULL, NULL, NULL, NULL, NULL, };

  //keeps track of what position the nodes will need to be placed in.
  int nodePos = 0;

/*************************Begin Drive Ya' Nuts*************************/

  //The initial starting node for the nodePos to look at AFTER INCREMENTING is the node directly after the one placed

  //The initial starting node for the nodePos to look at AFTER DECREMENTING is the next available node, IF ANY



  //STILL NEEDS TO HAVE NODES "PLACED"
  while(nodePos != 7)
  {

//printf("Line 46");fflush(stdout);
    switch(nodePos) //assigns which sides need to be checked
    {


        case 0:
            //no checking needed
printf("\nCase 0");fflush(stdout);
            nodeTracker[0] = nodes[nodeNum%7];
            Attempt[nodePos][nodeNum % 7] = 'C';
            nodeNum++;
            nodePos++;
            nodeTracker[1] = nodes[nodeNum%7];
            break;

        case 1:
printf("\nCase 1 %i, %i", nodePos, nodeNum);fflush(stdout);
            while(nodePos == 1)
            {
              while(nodeTracker[0][1] != nodeTracker[1][4])
              {
                int temp = nodeTracker[nodePos][0];
                int i;
                for(i = 1; i < 6; i++)
                {
                  nodeTracker[nodePos][i] = nodeTracker[nodePos][i - 1];
                }
                nodeTracker[nodePos][5] = temp;
              }
printf("\nRotate Ended");fflush(stdout);
              Attempt[nodePos][nodeNum % 7] = 'C';
              inUse[nodeNum % 7] = 'T';
              nodePos++;
              nodeNum++;
              nodeTracker[2] = nodes[nodeNum%7];
            }
            break;

        case 2:
printf("\nCase 2");fflush(stdout);
            while(nodePos == 2)
            {
              while((nodeTracker[0][2] != nodeTracker[2][5]) && (nodeTracker[1][3] != nodeTracker[2][0]))
              {
                int temp = nodeTracker[nodePos][0];
                int i;
                for(i = 1; i < 6; i++)
                {
                  nodeTracker[nodePos][i - 1] = nodeTracker[nodePos][i];
                }
                nodeTracker[nodePos][5] = temp;
              }
printf("\nRotate Ended");fflush(stdout);
              //All sides match
              if(nodeTracker[0][2] == nodeTracker[2][5] && nodeTracker[1][3] == nodeTracker[2][0])
              {
                Attempt[nodePos][nodeNum % 7] = 'C';
                inUse[nodeNum % 7] = 'T';
                nodePos++;
printf("\nAll Sides Match");fflush(stdout);
              }
              else //not all, but some sides match
              {
                Attempt[nodePos][nodeNum % 7] = 'C';
                //FIND NEXT AVAILABLE NODE
                nodeNum++;
printf("\nSome Sides Matched");fflush(stdout);
                if(Attempt[nodePos][nodeNum % 7] != 'C')
                {
                  if(inUse[nodeNum] == 'T')
                  {
                    Attempt[nodePos][nodeNum] = 'C';
                  }
                }
                else//ATTEMPTS ROW FULL
                {
 printf("\nAttempts Row Full, nodePos %i", nodePos);fflush(stdout);                  int j;
                  for(j = 0; j < 7; j++)
                  {
                    Attempt[nodePos][j] = 'f';
                  }
                  inUse[nodePos] = 'g';
                  nodePos--;
                  nodeNum = (nodeNum + 1) % 7;
                }
              }
            nodeTracker[3] = nodes[nodeNum%7];
            }
            break;

        case 3:
 printf("\nCase 3");fflush(stdout);
            //pos0 bottom MATCH Pos3 top
             //pos2 bottom left match Pos3 top right
            while(nodePos == 3)
            {

              while(nodeTracker[0][3] != nodeTracker[3][0] && nodeTracker[2][4] != nodeTracker[3][1])
              {
                int temp = nodeTracker[nodePos][0];
                int i;
                for(i = 1; i < 6; i++)
                {
                  nodeTracker[nodePos][i - 1] = nodeTracker[nodePos][i];
                }
                nodeTracker[nodePos][5] = temp;
              }
 printf("\nRotate Ended ");fflush(stdout);
              //All sides match
              if(nodeTracker[0][3] == nodeTracker[3][0] && nodeTracker[2][4] == nodeTracker[3][1])
              {
 printf("\nAll Sides Match");fflush(stdout);
                Attempt[nodePos][nodeNum % 7] = 'C';
                inUse[nodeNum % 7] = 'T';
                nodePos++;
              }
              else //not all, but some sides match
              {
 printf("\nSome Sides Match");fflush(stdout);
                Attempt[nodePos][nodeNum % 7] = 'C';
                //FIND NEXT AVAILABLE NODE
                nodeNum++;
                if(Attempt[nodePos][nodeNum % 7] != 'C')
                {
                  if(!(inUse[nodeNum] != 'T'))
                  {
                    Attempt[nodePos][nodeNum] = 'C';
                  }
                }
                else//ATTEMPTS ROW FULL
                {
 printf("\nAttempts Row Full, nodePos %i", nodePos);fflush(stdout);                  int j;
                  for(j = 0; j < 7; j++)
                  {
                    Attempt[nodePos][j] = 'v';
                  }
                  inUse[nodePos] = 'x';
                  nodePos--;
                  nodeNum = (nodeNum + 1) % 7;
                }
              }
            nodeTracker[4] = nodes[nodeNum%7];
            }
            break;

         case 4:
 printf("\nCase 4");fflush(stdout);
            while(nodePos == 4)
            {
              while(nodeTracker[0][4] != nodeTracker[4][1] && nodeTracker[3][5] != nodeTracker[4][2])
              {
                int i;
                int temp = nodeTracker[nodePos][0];
                for(i = 1; i < 6; i++)
                {
                  nodeTracker[nodePos][i - 1] = nodeTracker[nodePos][i];
                }
                nodeTracker[nodePos][5] = temp;
              }
 printf("\nRotate Ended");fflush(stdout);
              if(nodeTracker[0][4] == nodeTracker[4][1] && nodeTracker[3][5] == nodeTracker[4][2])
              {
printf("\nAll Sides Match");fflush(stdout);

                Attempt[nodePos][nodeNum % 7] = 'C';
                inUse[nodeNum % 7] = 'T';
                nodePos++;
              }
              else //not all, but some sides match
              {
 printf("\nSome Sides Match");fflush(stdout);
                Attempt[nodePos][nodeNum % 7] = 'C';
                //FIND NEXT AVAILABLE NODE
                nodeNum++;
                if(Attempt[nodePos][nodeNum % 7] != 'C')
                {
                  if(!(inUse[nodeNum] != 'T'))
                  {
                    Attempt[nodePos][nodeNum] = 'C';
                  }
                }
                else//ATTEMPTS ROW FULL
                {
 printf("\nAttempts Row Full, nodePos %i", nodePos);fflush(stdout);
                  int j;
                  for(j = 0; j < 7; j++)
                  {
                    Attempt[nodePos][j] = 'w';
                  }
                  inUse[nodePos] = 'y';
                  nodePos--;
                  nodeNum = (nodeNum + 1) % 7;
                }
              }
            nodeTracker[5] = nodes[nodeNum%7];
            }
            break;

        case 5:
            while(nodePos == 5)
            {
 printf("\nCase 5");fflush(stdout);

              //No sides match
              while(nodeTracker[0][5] != nodeTracker[5][2] && nodeTracker[4][0] != nodeTracker[5][3])
              {
                //rotate node
                int temp = nodeTracker[nodePos][0];
                int i;
                for(i = 1; i < 6; i++)
                {
                  nodeTracker[nodePos][i - 1] = nodeTracker[nodePos][i];
                }
                nodeTracker[nodePos][5] = temp;
              }
 printf("\nRotate Ended");fflush(stdout);
              //All sides match
              if(nodeTracker[0][5] == nodeTracker[5][2] && nodeTracker[4][0] == nodeTracker[5][3])
              {
 printf("\nAll Sides Match");fflush(stdout);
                Attempt[nodePos][nodeNum % 7] = 'C';
                inUse[nodeNum % 7] = 'T';
                nodePos++;
              }
              else //not all, but some sides match
              {
 printf("\nSome Sides Matched");fflush(stdout);
                Attempt[nodePos][nodeNum % 7] = 'C';
                //FIND NEXT AVAILABLE NODE
                nodeNum++;
                if(Attempt[nodePos][nodeNum % 7] != 'C')
                {
                  if(!(inUse[nodeNum] != 'T'))
                  {
                    Attempt[nodePos][nodeNum] = 'C';
                  }
                }
                else//ATTEMPTS ROW FULL
                {
 printf("\nAttempts Row Full, nodePos %i", nodePos);fflush(stdout);                  int j;
                  for(j = 0; j < 7; j++)
                  {
                    Attempt[nodePos][j] = 'e';
                  }
                  inUse[nodePos] = 'w';
                  nodePos--;
                  nodeNum = (nodeNum + 1) % 7;
                }
              }
            nodeTracker[6] = nodes[nodeNum%7];
            }
            break;

        case 6:
 printf("\nCase 6");fflush(stdout);
            //Pos0 top match Pos6 bottom
              //Pos5 top right match Pos6 bottom left
             //POS1 top left MATCH Pos6 Bottom right
            while(nodePos == 6)
            {
              while(nodeTracker[0][0] != nodeTracker[6][3] && nodeTracker[5][1] != nodeTracker[6][4]  && nodeTracker[1][5] != nodeTracker[6][2])
              {
                //rotate
                int temp = nodeTracker[nodePos][0];
                int i;
                for(i = 1; i < 6; i++)
                {
                  nodeTracker[nodePos][i - 0] = nodeTracker[nodePos][i];
                }
                nodeTracker[nodePos][5] = temp;
              }

              //All sides match
              if(nodeTracker[0][0] == nodeTracker[6][3] && nodeTracker[5][1] == nodeTracker[6][4] && nodeTracker[1][5] != nodeTracker[6][2])
              {
                Attempt[nodePos][nodeNum % 7] = 'C';
                inUse[nodeNum % 7] = 'T';
                nodePos++;
              }
              else //not all, but some sides match
              {
                Attempt[nodePos][nodeNum % 7] = 'C';
                //FIND NEXT AVAILABLE NODE
                nodeNum++;
                if(Attempt[nodePos][nodeNum % 7] != 'C')
                {
                  if(!(inUse[nodeNum] != 'T'))
                  {
                    Attempt[nodePos][nodeNum] = 'C';
                  }
                }
                else//ATTEMPTS ROW FULL
                {
                  int j;
                  for(j = 0; j<7; j++)
                  {
                    Attempt[nodePos][j] = 'd';
                  }
                  inUse[nodePos] = 'a';
                  nodePos--;
                  nodeNum = (nodeNum + 1) % 7;
                }
              }
            }
            break;

        default :
        printf(".");

    }//switch
  }//loop

  printf("%3.2f\n",0.0);
  return 0;
}//main
