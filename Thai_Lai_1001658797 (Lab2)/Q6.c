//Thai Lai
//1001658797
//Lab2 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 30min

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//method was demonstrated in class lecture by Professor Bhanu Jain 
int countOccurences(char str[], char c1)
{
	int counter = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if(str[i] == c1)
		{
			counter++;
		}
	}
	return counter;
}
//method was demonstrated in class lecture by Professor Bhanu Jain
char mostFrequentCharacter(char str[]) 
{
	int max_counter = 0, counter = 0;
	char max_char = str[0]; //the initial value of max_char makes no difference

	for (int i = 0; i < strlen(str); i++)
	{
		counter = countOccurences(str, str[i]);
		if (counter > max_counter)
		{
			max_counter = counter;
			max_char = str[i];
		}
	}
	return max_char;
}
//as said in the warning, the main function haven't been altered in any way
int main () 
{
	char text[21];
	while (true) 
	{
		printf("Enter some text, or q to quit: ");
		gets(text);
		if (strcmp(text, "q") == 0)
		{
			break;
		}
		if (strlen(text) == 0)
		{
			break;
		}
	char c = mostFrequentCharacter(text);
	int number = countOccurences(text, c);
	printf("Most frequent character: '%c'\n", c);
	printf("Number of occurrences of '%c': %d\n\n", c, number);
	}

	printf("Exiting...\n");
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
