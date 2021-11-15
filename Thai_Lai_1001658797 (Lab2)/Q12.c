//Thai Lai
//1001658797
//Lab2 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 25min

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int userInteger (char *message) //method was created to capture userinput
{
	printf("%s",message); //print out the prompt telling the user to input the value for the integer
  	char thislabisnotfunatall[9999] = {0}; //variable thislabisnotfunatall was declared
  	fgets(thislabisnotfunatall, 9999, stdin); //capture the userinput and store it in thislabisnotfunatall
  	int num = atoi(thislabisnotfunatall); //convert the value to the form of double
  	
  	if (strcmp(thislabisnotfunatall, "q") == 0) //string comparing statement
	{                      //if thisnotfunatall is equal to q 
		printf("Exiting...\n"); //quit the program and print exiting
		exit(0);
	}
	else //otherwise
		return num; //return the value of num
}

int repeatLetters (char *text, int times) //method was created to loop printing each
{	//of the characters in the string based on the value of the integer the user put in
	int length = strlen(text); //capturing string length
	for (int i = 0; i < length; i++) //for loop created to scan through each
	{          //of the characters of the string using string length 
		for (int k = 1; k <= times; k++) //firguring out the number of times we'll have 
		{ //to print the characters (which is based on the value of the userinput)
			printf("%c", text[i]); //print each of the characters out
		}
	}
}
//as said in the warning, the main function haven't been altered in any way
void main()
{                         //just a simple main function provided by UT Arlington
	while (true)
	{
		printf("Enter some text, or q to quit: ");
		char text[200];
		gets(text);
		if(strcmp(text, "q'") == 0)
		{
			printf("Exiting...\n");
			exit(0);
		}
		int times = userInteger("Enter number of times (must be > 0): ");
		repeatLetters(text, times);
		printf("\n\n");
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