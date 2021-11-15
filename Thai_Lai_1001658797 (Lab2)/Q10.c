//Thai Lai
//1001658797
//Lab2 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 15min

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

double user_msg(char *message) //method created to capture userinput
{	
	char thislabisnotfunatall[9999]; //variable thislabisnotfunatall was declared
	printf(message); //print out the prompt for userinput
	gets(thislabisnotfunatall); //capture the userinput and use it for thislabisnotfunatall
  	double num = atof(thislabisnotfunatall); //convert the value to the form of double 
	    //and store it in the variable num
	if (strcmp(thislabisnotfunatall, "q") == 0) //string comparing statement
	{                      //if thisnotfunatall is equal to q 
		printf("Exiting...\n");   //quit the program and print exiting
		exit(0);
	}
	else //otherwise
		return num;  //store it into num
}

double volume(double R) //method created to determine the volume
{
	double volume  = (4.0/3.0) * M_PI * pow(R, 3); //variable was declared for volume calculations
	return volume; //return the value of volume
}
//as said in the warning, the main function haven't been altered in any way
int main (void) {
	double R = 0;       //just a main function provided by UTA
	while (true) {
		R = user_msg("\nEnter Radius: ");
		printf("Radius = %0.2f\n", R);
		printf("volume of sphere with radius (%0.2f) is %0.2f\n", R, volume(R));
	}
	return 0;
}

/**HONOR CODE
I plege, on my honor, to uphold UT Arlington's tradion of academic 
intergrity, a tradition that values hard work and honest effort in the pursuit
of acdemic excellence.
I promise that I will submit only work that I personally create or that
I contribute to group collaborations, and I will appropriately reference
any work from other sources. I will follow the highest standards of 
integrity and upholdthe spirit of the Honor Code.
I will not engage in any form of cheating.

Thai Lai
1001658797
**/