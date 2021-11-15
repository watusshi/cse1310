//Thai Lai
//1001658797
//Lab1 (CSE-1310-007)
//Professor Bhanu Jain
//Time taken: 15min

#include <stdio.h>
#include <string.h>

int main () {
	char string[20]; //variable string declared
	printf("Please enter a string: "); //asking the user to input a string
	scanf("%s",string); //capture the user input and store it in string

	int n; //variable n declared
	printf("Please enter an integer: "); //asking the user to input an integer
	scanf("%d", &n); //capture the user input and store it in n

	int length = strlen(string); //capture the length of string
	int i; //variable i declared

	for(i = 0; i<length-n; i++){ //loop created to replace all the characters of string with $ except for the last n numbers of the string
		printf("%c",'$');
	}
	for(i = length - n; i<length; i++){ //loop created to contain the n numbers of the last characters which will eventually to print out
		printf("%c",string[i]);
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