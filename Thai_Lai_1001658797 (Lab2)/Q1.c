//Thai Lai
//1001658797
//Lab2 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 5min

#include <stdio.h>

int main () {
	int N1; //varible N1 was declared
	printf("Enter an integer N1: "); //asking the user to input the value for N1
	scanf("%d",&N1); //cature the userinput and store it in N1

	int N2; //variable N2 was declared
	printf("Enter an integer N2: "); //asking the user to input the value for N2
	scanf("%d",&N2); //capture the userinput and store it in N2

	while (N1 % 11 !=0) { //while loop created to increment N1 to the next multiple of 11
		N1++;
	}

	int count = 0; //variable count was declared for further storing process

	while (N1 < N2) { //while loop created which will 
		printf("%d ", N1); //keep adding 11 to that until it hits the value of N2.
		N1 = N1 + 11; //as demonstrated with N1 < N2
		count++;
	}
	printf("\n%d numbers between %d and %d are multiples of 11\n", count, N1, N2);
	printf("Exiting..."); //print the output illustrating the value & 11 multiplication pair
	return 0; //that are compatible with the order function N1 < x*11 < N2
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
