//Thai Lai
//1001658797
//Lab1 (CSE-1310-007)
//Professor Bhanu Jain
//Time taken: 15min

#include <stdio.h>

int main() {
	double a; //variable a declared
	printf("Please enter a double number: "); //asking the user to input a double number
	scanf("%lf",&a); //capture the user input and store it in a

	int b; //variable b declared
	printf("Please enter an integer: "); //asking the user to input an integer
	scanf("%d", &b); //capture the user input and store it in b

	int al = a; //variable al declare and set equal to a
	printf("The first number cast into an int becomes %d\n",al); //print out the value of al which was casted with a

	int cal1 = al+b; //variable cal1 declared for calculating al+b
	int cal2 = al-b; //variable cal2 declared for calculating al-b
	int cal3 = al*b; //variable cal3 declared for calculating al*b
	int cal4 = al/b; //variable cal4 declared for calculating al/b

	printf("%d %d %d %d", cal1, cal2, cal3, cal4); //print out the value of cal1, cal2, cal3, and cal4

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