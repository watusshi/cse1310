//Thai Lai
//1001658797
//Lab1 (CSE-1310-007)
//Professor Bhanu Jain
//Time taken: 10min

#include <stdio.h>
#include <math.h>

int main () {
	int p = 2; //variable p declared
	
	int n; //variable n declared
	printf("Please enter the square number: "); //asking the user to input a square number (int)
	scanf("%d", &n); //capture the user input and store it in n

	int result = pow(p,n)-1; //variable result declared with calculations 
	printf("%d gains would be put on the first %d squares",result,n); //print out the variable result with prompt

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
