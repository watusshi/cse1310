//Thai Lai
//1001658797
//Lab1 (CSE-1310-007)
//Professor Bhanu Jain
//Time taken: 5min

#include <stdio.h>

int main () {
	int number; //variable number declared
	char goods[20]; //variable goods declared with the maximum length of 20
	double price; //varaible price declared

	printf("Please enter the number: "); //asking the user to input an int
	scanf("%d", &number); //capture the user input and store it in number

	printf("Please enter the goods: "); //asking the user to input a string
	scanf("%s", goods); //capture the user input and store it in goods

	printf("Please enter the price: "); //asking the user to input a double
	scanf("%lf", &price); //capture the user input and store it in price

	printf("%d %s for $%0.2f", number, goods, price); //print out the values of all the variables

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