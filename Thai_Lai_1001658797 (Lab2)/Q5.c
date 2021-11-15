//Thai Lai
//1001658797
//Lab2 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 10min

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main () {
	int N; // variable N was declared
	printf("Enter a positive integer N > 0: "); //asking the user to input the value
	scanf("%d",&N); //capture the user input and store it in N

	if (N <= 0) { //if loop which will catch the errors if the user input a non-working value
		printf("Error! Please follow the instruction!\n"); //print out the error message and the program will end here
	}
	for (int i = 0; i < N; i++) { //for loop create to print out the amount of * sign based on the value input by the user
		for (int k = 0; k <= i; k++) { //also each of the printing line will have the amount of * sign based on the line number
			printf("*%c", i); //EX: line 1 = 1 *        line 2 = 2 *          line 3 = 3 *         line 4 = 4 *
		}
		printf("\n"); //separate it into lines
	}
	printf("Exiting...\n"); //telling the user that program will now be exiting
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