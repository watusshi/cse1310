//Thai Lai
//1001658797
//Lab1 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 5min

#include <stdio.h>
#include <string.h>

int main () {
	char management [20]; //variable management declared with the maximum length of 20
	printf("Please enter a string: "); //asking the user to input a string
	scanf("%s", management); //capture the userinput and store it in management

	int integer; //variable integer declared
	printf("Please enter an integer: "); //asking the user to input an integer
	scanf("%d",&integer); //capture the userinput and store it in integer

	int length = strlen(management); //capture the length of the input string
	printf("The string has length %d\n", length); //print out the value of length

	int product = integer*length; //variable product declared with calculations
	printf("The product is %d\n", product); //print out the value of product

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