//Thai Lai
//1001658797
//Lab2 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 25min

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *lowered(char *str) //method created to convert all the userinput to lowercase
{
	int i = 0; //variable i was created and set to 0
	while (str[i] != '\0') //while loop created to scan through
	{           //the entire string input
		str[i] = tolower(str[i]); //converting the input to lowered case
		i++; //going through each of the characters in the string by 1
	}
	return str; //return the variable for further usage
}

char *reversed(char *str) //method created to reverse printing the userinput
{
	int stringlength = strlen(str); //capturing the userinput string length
	for (int k = 0; k < stringlength; k++) //telling the program to select through
	{   //all the characters inside the string which equal to the string's length
		if (stringlength % 2 == 1 && stringlength / 2 == k) //the process of reversing all
		{                            //the characters inside the string 
			break; 
		}
		if (stringlength % 2 == 0 && stringlength / 2 == k)
		{
			break;
		}
		char tmp = str[k]; //variable tmp was created storing the value k of str
		str[k] = str[stringlength - k -1]; 
		str[stringlength - k - 1] = tmp;
	}
	return str;
}
//as said in the warning, the main function haven't been altered in any way
int main (void) //incrementing all the method into the program
{
	char str1[21] = "helLLLLOOO";
	char str2[21] = "helLooo";
	char str3[21];
	printf("Original %s\n", str1);
	printf("lowered %s\n", lowered(str1));
	strcpy(str2, lowered(str1));
	strcpy(str3, reversed(str2));
	printf("reversed %s\n", str3);
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
