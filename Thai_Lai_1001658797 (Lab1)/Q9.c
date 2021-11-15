//Thai Lai
//1001658797
//Lab1 (CSE-1310-007)
//Professor Bhanu Jain
//Time taken: 25min

#include <stdio.h>
#include <string.h>

int main() {
	char day[20]; //variable day declared
	printf("Please enter a string, at least five letters long: "); //asking the user to input a string
	scanf("%s", day); //capture the user input and store it in day

	int l = strlen(day); //capturing the length of day

	int n; //variable n declared
	printf("Please enter an integer smaller than the string length: "); //asking the user to input an integer
	scanf("%d", &n); //capture the user input and store it in n
	
	printf("The last 3 letters are: "); //print out a prompt

	for(char ending = n; ending < strlen(day); ending++){ //loop created to print out the last n numbers of character of the string day
		printf("%c", ending[n+day-1]);
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