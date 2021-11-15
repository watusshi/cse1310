//Thai Lai
//1001658797
//Lab2 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 10min

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int countBs(char text[]) //method was created to scan through
{        //the loop of the string and compare the char at index i with B or b
	int length = strlen(text); //capturing the string length
	int count = 0; //variable count declared and set to 0
	for (int i = 0; i <= length; i++) //for loop created to scan through the string 
	{	 
		
		if (text[i] == 'b' || text[i] == 'B') //comparing the string value with B & b
			count++; //variable count will increase it's value by 1 
	}              //if it found one match
	return count; //return the value to count
}
//as said in the warning, the main function haven't been altered in any way
int main () { 
	char text[21];         //just a typical main function provided by UTA

	printf("Please enter a word: ");
	gets(text);

	int result = countBs(text);
	printf("%s contains letter B %d times.\n", text, result);

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