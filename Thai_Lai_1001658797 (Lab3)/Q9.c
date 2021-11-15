//Thai Lai
//1001658797
//Lab3 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 145min

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char *firstWord(char line[200], int N)
{ //function created to print out the first word of the array values
	int hacknet = 0;
	static char first[999];
	while(line[hacknet] !=' ')  //demonstrated by professor Bhanu Jain in lecture
	{
		first[hacknet] = line[hacknet];
		hacknet++;
	}
	first[hacknet] = '\0';
	return first;
}

char *lastWord(char line[200], int N)
{ //function created to print out the last word of the array values
	int hacknet = 0;
	static char last[999];    //demonstrated by professor Bhanu Jain in lecture
	int lastword = N - 1;
	while(line[lastword] !=' ')
	{
		last[hacknet] = line[hacknet];
		hacknet++;
	}
	last[hacknet] = '\0';
	return last;
}

int main() //main function - this is where all the magical things happen
{
	char bigline[200]; //variable bigline was declared
	int compute = 0; //variable compute was declared and set to 0
	FILE *fp = fopen("idioms.txt", "r"); //variable fp was declared to store the values of the mention file
	if(fp == NULL) //if statement created to catch errors
	{ //if there are no value for fp
		printf("File not found\n"); //then print out file not found
		exit(1);
	}
	FILE *ff = fopen("outFirst.txt", "w"); //variable ff was declared to store the values of the mention file
	if(fp == NULL) //if statement created to catch errors
	{ //if there are no value for fp
		printf("File not found\n"); //then print out file not found
		exit(1);
	}
	FILE *fl = fopen("outLast.txt", "w"); //variable fl was declared to store the values of the mention file
	if(fp == NULL)  //if statement created to catch errors
	{ //if there are no value for fp
		printf("File not found\n"); //then print out file not found
		exit(1);
	}

	while(true) //while the value of the files contain values...
	{
		if(fgets(bigline, 200, fp) != NULL) //increment this proccess into the system
		{
			int mylen = strlen(bigline);
			printf("%d)%s", ++compute, bigline);
			fprintf(ff, "%d)%s", compute, bigline);
			fprintf(fl, "%d)%s", compute, bigline);
			printf("first: %-10s", firstWord(bigline, mylen));
			printf("last: %s\n\n", lastWord(bigline, mylen));
			fprintf(ff, "first: %-10s\n", firstWord(bigline, mylen));
			fprintf(fl, "last: %s\n\n", lastWord(bigline, mylen));
		}
		else break;
	}
	fclose(fp);

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
