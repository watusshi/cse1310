//Thai Lai
//1001658797
//Lab1 (CSE-1310-007)
//Professor Bhanu Jain
//Time taken: 20min

#include <stdio.h>
#include <string.h>

int main () {
	char string [10]; //variable string was declared with length of 10 characters max
	printf("Please enter a string, at least 5 letters long: "); //asking the user to input the string with at least 5 letter long
	scanf("%s",string); //capture the user input and store it in string

	int n; //variable n declared
	printf("Please enter an integer: "); //asking the user to input an integer
	scanf("%d",&n); //capture the user input and store it in n

	int length = strlen(string); //capture the length of the string and store in variable length
	char first = string[0]; //variable first was declared to contain the first character of variable string

	printf("The first letter is %c\n", first); //print out the value of first with the prompt

	for(int i = 1; i < n; i++){ //loop created to select through the next characters but the turn has to be smaller than value of n
		printf("The next letter is %c\n", string[i]); //print out those values with the prompt
	}
	
	printf("The rest of the string is "); //print out the prompt

	for(int i = n; i < strlen(string); i++){ //loop created to select through the rest of the characters in the string
		printf("%c", string[i]); //print out the values
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