//Thai Lai
//1001658797
//Lab2 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 10min

#include <stdio.h>

int main () {
	int N; //variable N was declared
	printf("Enter an integer N: "); //asking the user to input the value for N
	scanf("%d", &N); //capture the userinput and store it in N

	int holy = 0; //boolean holy was created and set to 0 (off)

	for(int i = 1; i < N; i++) //for loop created to initiate the boolean
	{
    	if(N == (i*i+i)) //if an N integer could be calculate through a form of i*i+1
    	{
      		holy = 1; //then set holy = 1 which means (on)
    	}
	}
	
	if (holy) // if statement reading the holy value (has to be 1)
	{
		printf("%d is a holy number in Numerion.\n",N); //print out the statement
	}          //as demonstrated in the lab instruction
	else //else statement for catching errors and integers that are not considered 
	{         //to be holy
		printf("%d is not holy\n",N); //print out the statement saying the integer
	}        //is not holy
	
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