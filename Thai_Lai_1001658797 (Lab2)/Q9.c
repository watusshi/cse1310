//Thai Lai
//1001658797
//Lab2 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 15min

#include <stdio.h>
#include <string.h>

int user_integer(char *message) //user_integer method created to capture userinput
{
  	printf("%s",message); //print out the messages as created in the main function
  	char thislabisnotfunatall[9999] = {0}; //variable thislabisnotfunatall was created and set to 0
  	fgets(thislabisnotfunatall, 9999, stdin); //capturing the userinput using fgets
  	int integer = atoi(thislabisnotfunatall); //converting string to integer with atoi
  	return integer; //return the integer
}

int pickMiddle(int a, int b, int c) //method created to determine which 
{                     //input is between the other 2
	if((a > c && a < b) || (a < c && a > b)) //comparison for variable a
		return a;
  	if((b > c && b < a) || (b < c && b > a)) //comparison for variable b
		return b;
	if((c > a && c < b) || (c < a && c > b)) //comparison for variable c
		return c;
}
//as said in the warning, the main function haven't been altered in any way
int main (void) 
{
	int N1 = user_integer("Enter number N1: "); //variable N1 incrementing the user_integer method
	int N2 = user_integer("Enter number N2: "); //variable N1 incrementing the user_integer method
	int N3 = user_integer("Enter number N3: "); //variable N1 incrementing the user_integer method
	printf("middle %d\n", pickMiddle(N1, N2, N3)); //print out the prompt telling which 
										//number is the middle of the 2
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