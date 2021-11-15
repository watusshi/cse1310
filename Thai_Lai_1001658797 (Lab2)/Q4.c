//Thai Lai
//1001658797
//Lab2 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 5min

#include <stdio.h>
#include <math.h>

int main () 
{
	int low,high; //variable low and high were declared
	printf("Enter low: "); //asking the user to input the value for low
	scanf("%d", &low); //capture the user input and store it in low
	printf("Enter high: "); //asking the user to input the value for high
	scanf("%d", &high); //capture the user input and store it in high

	if (low > high) //if statement which will end the program if the low > high
	{
		printf("no numbers found"); //print out the error
	}
	else //otherwise the program will go on since the error is at low > high
	{
		for(int i = low; i <= high; i++) //for looping for determining the values
		{            //but they have to be larger than low and smaller or equal to high
			if ( i % 4 != 0) //excepting the multiplication of 4
			{
				printf("%d ", i); //loop print all the value 
			}
		}
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