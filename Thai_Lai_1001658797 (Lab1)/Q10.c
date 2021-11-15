//Thai Lai
//1001658797
//Lab1 (CSE-1310-007)
//Professor Bhanu Jain
//Time taken: 35min

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {
	char string [20]; //varaible string declared
	printf("Please enter a string: "); //asking the user to input a string
	scanf("%s", &string); //capture the user input and store it in string

	int length = strlen(string); //capture the length of string
	int i; //variable i was declared

	if (length > 4){ //if the length of the string is larger than 4, the loop will start which will convert every characters into upper-case
   		for (i = 0; string[i]!='\0'; i++) {
   			if(string[i] >= 'a' && string[i] <= 'z') {
         	string[i] = string[i] -32;
      		}
   		}
   	}
	else if (length <= 4){ //if the length of the string is not larger than 4, this loop will start and because all the upper-case characters
		for(i = 0; i <= strlen(string); i++){ //was in the ascii format between 65 to 90 so we gonna exclude them, and finally convert them 
      		if(string[i] >= 65 && string[i] <= 90) //into all lower-case
         	string[i] = string[i] + 32;
			}
		}
	printf("Output string: %s\n", string); //print out the value of string with the prompt
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
