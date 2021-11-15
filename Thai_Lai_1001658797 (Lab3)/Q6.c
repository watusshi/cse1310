//Thai Lai
//1001658797
//Lab3 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 5min

#include <stdio.h>

int main()
{
	char arr[3] [3] [3] = 
	{
		{{'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}},
		{{'J', 'K', 'L'}, {'M', 'N', 'O'}, {'P', 'Q', 'R'}},
		{{'S', 'T', 'U'}, {'V', 'W', 'X'}, {'Y', 'Z', '-'}},
	}; //variable arr was created to store all the values in an array format

	printf("3D Array Elements\n"); //print out 3D Array Elements
	
	for (int i = 0; i < 3; i++) //for loop created to scanning through the array values (3D structure)
	{
		for (int k = 0; k < 3; k++) //for loop created to scanning through the array values (3D structure)
		{
			for (int h = 0; h < 3; h++) //for loop created to scanning through the array values (3D structure)
			{
				printf("%c \t", arr[i][k][h]); //print out the array values in the correct format
			}
			printf("\n"); //nothing here, just a format to make the output looks better
		}
		printf("\n"); //nothing here, just a format to make the output looks better
	}
	printf("\n"); //nothing here, just a  format to make the output looks better
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