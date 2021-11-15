//Thai Lai
//1001658797
//Lab2 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 15min

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char startsWithVowel(char *word) //method created to catch 
{	          //words with vowels
	int result; //variable result was declared
	int length = strlen(word); //variable length was declared to capture string length
	int yessir; //variable yessir was declared
	if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' //if statement determining if the
		|| word[0] == 'o' || word[0] == 'u' || word[0] == 'A'  //words are containing the vowels
		|| word[0] == 'E' || word[0] == 'I'  //u, e, o, a, i, and the uppercase version of them
		|| word[0] == 'O' || word[0] == 'U')
	{
		int yessir = 1; //variable yessir set to 1
		if (yessir = 1) //if variable yessir is 1
		{
			result = true; //then result set to true
		}
	}
	else //otherwise
	{
		result = false; //result is false
	}
	return result; //return the value to result
}
//as said in the warning, the main function haven't been altered in any way
void main (void)
{
	char word[21]; //just a simple main function provided by UT Arlington 
	while (true)
	{
		printf("Enter some word, or q to quit: ");
		gets(word);           
		if(strcmp(word, "q") == 0)
		{
			printf("Exiting...\n");
			exit(0);
		}
		bool result = startsWithVowel(word);
		if (result == true)
		{
			printf("Yes, %s starts with a vowel.\n\n", word);
		}
		else
		{
			printf("No, %s does not start with a vowel.\n\n", word);
		}
	}
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