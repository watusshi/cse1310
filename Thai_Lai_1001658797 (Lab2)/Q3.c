//Thai Lai
//1001658797
//Lab2 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 5min

#include <stdio.h>
#include <math.h>

int main () 
{
	int N; //variable N was declared
	printf("Enter a positive integer N > 1: "); //asking the user to enter the value for N
	scanf("%d", &N); //capture the userinput and store it in N
	
	if (N > 1) //if statement determine the program will run if N > 1
	{	
		for(int i = 0; pow(N,i) <= 40000; i++) //for loop saying it will increase the 
		{             //value of i by 1 and N^i has to be < than 40000
			printf("%0.0f ", pow(N,i)); //printing out the values
		}
	}
	else //else statement for catching errors
	{
		printf("Error! Your input must be > 1\n"); //print out the error
	}
	printf(" Exiting...");
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