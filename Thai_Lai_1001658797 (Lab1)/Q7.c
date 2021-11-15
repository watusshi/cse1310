//Thai Lai
//1001658797
//Lab1 (CSE-1310-007)
//Professor Bhanu Jain
//Time taken: 5min

#include <stdio.h>
#include <math.h>

int main () {
	double a; //variable a declared
	printf("Please enter a double number: "); //asking the user to input a double number
	scanf("%lf", &a); //capture the user input and store it into a

	int ar = (int)ceil(a); //variable ar declared containing the function ceiling to round-up the value of a
	int af = (int)floor(a); //variable af declared containing the function ceiling to round-down the value of a

	printf("ar = %d, af = %d, ar-af = %d", ar,af,ar-af); //print out the value of ar, af, and also containing the function which has ar-af

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