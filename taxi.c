#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>


int main () {
	srand(time(0));
	int pos1, pos2;
	pos1 = rand()%5;;  /*initiate the environment*/
	pos2 = rand()%5;
  bool pickup=false;
	char input[20]; 
	char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
  	char map5[]= "| | : | : |";
  	char map6[]= "| | : | :D|";
  	char map7[]= "+---------+"; 
  	printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
  /*list of commands*/

  printf ("INSTRUCTIONS: MOVE to the 'P' sign to PICKUP the passenger, then MOVE to the 'D' sign to DROPOFF the passenger\n");
	printf("MOVES: north, south, east, west\n");
	printf("ACTIONS: pickup, dropoff\n");
	if (pos1==0 && pos2==0) {   /*different environment*/
		char map1[]= "+---------+"; 
  	char map2[]= "|X: | : : |";
    char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 	 	char map5[]= "| | : | : |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}
	if (pos1==0 && pos2==1) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P:X| : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 	 	char map5[]= "| | : | : |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}
	if (pos1==0 && pos2==2) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: |X: : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 	 	char map5[]= "| | : | : |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}
	if (pos1==0 && pos2==3) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | :X: |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 	 	char map5[]= "| | : | : |";
 	 	char map6[]= "| | : | :D|";
 		char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}
	if (pos1==0 && pos2==4) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : :X|";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 		char map5[]= "| | : | : |";
 		char map6[]= "| | : | :D|";
 		char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}
	if (pos1==1 && pos2==0) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "|X: | : : |";
  	char map4[]= "| : : : : |";
 	 	char map5[]= "| | : | : |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}
	if (pos1==1 && pos2==1) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| :X| : : |";
  	char map4[]= "| : : : : |";
 	 	char map5[]= "| | : | : |";
 		char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}
	if (pos1==1 && pos2==2) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
 		char map3[]= "| : |X: : |";
  	char map4[]= "| : : : : |";
 	 	char map5[]= "| | : | : |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}
	if (pos1==1 && pos2==3) {
	 char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | :X: |";
  	char map4[]= "| : : : : |";
 		char map5[]= "| | : | : |";
 		char map6[]= "| | : | :D|";
 		char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}
	if (pos1==1 && pos2==4) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : :X|";
  	char map4[]= "| : : : : |";
 		char map5[]= "| | : | : |";
 		char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
		}
	if (pos1==2 && pos2==0) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "|X: : : : |";
 		char map5[]= "| | : | : |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}
	if (pos1==2 && pos2==1) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| :X: : : |";
 		char map5[]= "| | : | : |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}		
	if (pos1==2 && pos2==2) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : :X: : |";
 		char map5[]= "| | : | : |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}		
	if (pos1==2 && pos2==3) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : :X: |";
 		char map5[]= "| | : | : |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}		
	if (pos1==2 && pos2==4) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
		char map3[]= "| : | : : |";
  	char map4[]= "| : : : :X|";
 		char map5[]= "| | : | : |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}	
	if (pos1==3 && pos2==0) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 		char map5[]= "|X| : | : |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}	
	if (pos1==3 && pos2==1) {
		char map1[]= "+---------+"; 
		char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 		char map5[]= "| |X: | : |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}	
	if (pos1==3 && pos2==2) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 		char map5[]= "| | :X| : |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}	
	if (pos1==3 && pos2==3) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 		char map5[]= "| | : |X: |";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}	
	if (pos1==3 && pos2==4) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 		char map5[]= "| | : | :X|";
 	 	char map6[]= "| | : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}	
	if (pos1==4 && pos2==0) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 		char map5[]= "| | : | : |";
 	 	char map6[]= "|X| : | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}	
	if (pos1==4 && pos2==1) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 		char map5[]= "| | : | : |";
 	 	char map6[]= "| |X: | :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}	
	if (pos1==4 && pos2==2) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 		char map5[]= "| | : | : |";
 	 	char map6[]= "| | :X| :D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}	
	if (pos1==4 && pos2==3) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 		char map5[]= "| | : | : |";
 	 	char map6[]= "| | : |X:D|";
 	 	char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}	
	if (pos1==4 && pos2==4) {
		char map1[]= "+---------+"; 
  	char map2[]= "|P: | : : |";
  	char map3[]= "| : | : : |";
  	char map4[]= "| : : : : |";
 	  char map5[]= "| | : | : |";
 		char map6[]= "| | : | :X|";
 		char map7[]= "+---------+"; 
 		printf ("%s\n", map1);
  	printf ("%s\n", map2);
  	printf ("%s\n", map3);
  	printf ("%s\n", map4);
  	printf ("%s\n", map5);
  	printf ("%s\n", map6);
  	printf ("%s\n", map7);
	}	
	printf("Type 'start' to start the game:  \n");
	fgets (input, 20, stdin);
  if (strncmp(input, "start", 5)==0) {
	 while ((pos1!=4 || pos2!=4) || pickup==false) {
		printf("Type your MOVES/ACTIONS:  \n");
		fgets (input, 20, stdin);
    /*move north*/
		if (strncmp(input, "north", 5)==0) {
			if (pos1!=0) {
        pos1=pos1-1; 
			  printf("CURRENT POSITION: %d, %d\n", pos1, pos2);
        if (pickup==true) 
          printf ("THE PASSENGER IS IN THE CAR\n");
        if (pos1==0 && pos2==0) {   /*different environment*/
    char map1[]= "+---------+"; 
    char map2[]= "|X: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P:X| : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: |X: : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | :X: |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : :X|";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "|X: | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| :X| : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : |X: : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==3) {
   char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | :X: |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : :X|";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
    }
  if (pos1==2 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "|X: : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==2 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| :X: : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }   
  if (pos1==2 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : :X: : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }   
  if (pos1==2 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : :X: |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }   
  if (pos1==2 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : :X|";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "|X| : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| |X: | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | :X| : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : |X: |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | :X|";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "|X| : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| |X: | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | :X| :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : |X:D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :X|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
      }
      else {
        printf("CANNOT MOVE NORTH, CHECK MAP\n");
        printf("CURRENT POSITION: %d, %d\n", pos1, pos2);
        if (pickup==true) 
          printf ("THE PASSENGER IS IN THE CAR\n");
      }
		}

    /*move south*/
		else if (strncmp(input, "south", 5)==0) {
      if (pos1!=4) {
			 pos1=pos1+1;
			 printf("CURRENT POSITION: %d, %d\n", pos1, pos2);
       if (pickup==true) 
          printf ("THE PASSENGER IS IN THE CAR\n");
       if (pos1==0 && pos2==0) {   /*different environment*/
    char map1[]= "+---------+"; 
    char map2[]= "|X: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P:X| : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: |X: : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | :X: |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : :X|";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "|X: | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| :X| : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : |X: : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==3) {
   char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | :X: |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : :X|";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
    }
  if (pos1==2 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "|X: : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==2 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| :X: : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }   
  if (pos1==2 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : :X: : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }   
  if (pos1==2 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : :X: |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }   
  if (pos1==2 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : :X|";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "|X| : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| |X: | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | :X| : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : |X: |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | :X|";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "|X| : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| |X: | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | :X| :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : |X:D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :X|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
      }
      else {
        printf("CANNOT MOVE SOUTH, CHECK MAP\n");
        printf("CURRENT POSITION: %d, %d\n", pos1, pos2);
        if (pickup==true) 
          printf ("THE PASSENGER IS IN THE CAR\n");
      }
		}

    /*move west*/
		else if (strncmp(input, "west", 4)==0) {
      if (!((pos1==4 && pos2==0) ||(pos1==3 && pos2==0) ||(pos1==2 && pos2==0) ||(pos1==1 && pos2==0) ||(pos1==0 && pos2==0) || (pos1==0 && pos2==2) || (pos1==1 && pos2==2) || (pos1==4 && pos2==1) || (pos1==3 && pos2==1) || (pos1==3 && pos2==3) || (pos1==4 && pos2==3) )) {
			  pos2 = pos2-1;
        printf("CURRENT POSITION: %d, %d\n", pos1, pos2);
        if (pickup==true) 
          printf ("THE PASSENGER IS IN THE CAR\n");
        if (pos1==0 && pos2==0) {   /*different environment*/
    char map1[]= "+---------+"; 
    char map2[]= "|X: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P:X| : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: |X: : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | :X: |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : :X|";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "|X: | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| :X| : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : |X: : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==3) {
   char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | :X: |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : :X|";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
    }
  if (pos1==2 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "|X: : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==2 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| :X: : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }   
  if (pos1==2 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : :X: : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }   
  if (pos1==2 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : :X: |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }   
  if (pos1==2 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : :X|";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "|X| : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| |X: | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | :X| : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : |X: |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | :X|";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "|X| : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| |X: | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | :X| :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : |X:D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :X|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
      }
      else {
        printf("CANNOT MOVE WEST, CHECK MAP\n");
        printf("CURRENT POSITION: %d, %d\n", pos1, pos2);
        if (pickup==true) 
          printf ("THE PASSENGER IS IN THE CAR\n");
      }
		}

    /*move east*/
		else if (strncmp(input, "east", 4)==0) {
			if ((pos1==4 && pos2==4) ||(pos1==3 && pos2==4) ||(pos1==2 && pos2==4) ||(pos1==1 && pos2==4) ||(pos1==0 && pos2==4) ||(pos1==0 && pos2==1) || (pos1==1 && pos2==1) || (pos1==4 && pos2==0) || (pos1==3 && pos2==0) || (pos1==3 && pos2==2) || (pos1==4 && pos2==2)) {
        printf("CANNOT MOVE EAST, CHECK MAP\n");
        printf("CURRENT POSITION: %d, %d\n", pos1, pos2);
        if (pickup==true) 
          printf ("THE PASSENGER IS IN THE CAR\n");
      }
      else {
        pos2 = pos2+1;
        printf("CURRENT POSITION: %d, %d\n", pos1, pos2);
        if (pickup==true) 
          printf ("THE PASSENGER IS IN THE CAR\n");
        if (pos1==0 && pos2==0) {   /*different environment*/
    char map1[]= "+---------+"; 
    char map2[]= "|X: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P:X| : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: |X: : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | :X: |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==0 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : :X|";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "|X: | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| :X| : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : |X: : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==3) {
   char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | :X: |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==1 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : :X|";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
    }
  if (pos1==2 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "|X: : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }
  if (pos1==2 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| :X: : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }   
  if (pos1==2 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : :X: : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }   
  if (pos1==2 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : :X: |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  }   
  if (pos1==2 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : :X|";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "|X| : | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| |X: | : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | :X| : |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : |X: |";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==3 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | :X|";
    char map6[]= "| | : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==0) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "|X| : | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==1) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| |X: | :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==2) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | :X| :D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==3) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : |X:D|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
  if (pos1==4 && pos2==4) {
    char map1[]= "+---------+"; 
    char map2[]= "|P: | : : |";
    char map3[]= "| : | : : |";
    char map4[]= "| : : : : |";
    char map5[]= "| | : | : |";
    char map6[]= "| | : | :X|";
    char map7[]= "+---------+"; 
    printf ("%s\n", map1);
    printf ("%s\n", map2);
    printf ("%s\n", map3);
    printf ("%s\n", map4);
    printf ("%s\n", map5);
    printf ("%s\n", map6);
    printf ("%s\n", map7);
  } 
      }
		}

    /*pickup*/
		else if (strncmp(input, "pickup", 6)==0) {
			if (pos1!=0 || pos2!=0) {
				printf ("CANNOT PICK UP\n");
				printf("CURRENT POSITION: %d, %d\n", pos1, pos2);
			} 
			else {
				printf ("THE PASSENGER JUST GOT PICKED UP\n");
				printf("CURRENT POSITION: %d, %d\n", pos1, pos2);
        pickup=true;
			}
		}

    /*dropoff*/
		else if (strncmp(input, "dropoff", 7)==0) {
      if (pos1!=4 || pos2!=4) {
				printf ("THIS IS NOT THE DESTINATION\n");
				printf("CURRENT POSITION: %d, %d\n", pos1, pos2);
      }
      else if (pickup==false){
        printf ("YOU DID NOT PICK UP PASSENGER\n");
      }
    }
    /*wrongcommand*/
    else {
      printf ("WRONG COMMAND\n");
      printf ("CURRENT POSSITION: %d, %d\n", pos1, pos2);
    }
  }


		while (pos1==4 && pos2==4 && pickup==true) {
      printf("Type your MOVES/ACTIONS:  \n");
      fgets (input, 20, stdin);

      /*dropoff*/
			if (strncmp(input, "dropoff", 7)==0) {
				printf ("GAME FINISHED\n");
        break;
      }
      else {
        printf("YOU DID NOT DROP OFF THE PASSENGER\n");
        break;
        }
			}
		}


	return(0);
}
	