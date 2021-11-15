//Thai Lai
//1001658797
//Lab3 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 15

#include <stdio.h>
#define rows 5
#define cols 3

void printDoubleMatrix(char *name, double a[rows][cols], int rows1, int cols1)
{	//function created to print out the matrix values
	printf("%s: \n", name); //print out the titles of the arrays
	for(int i = 0; i < rows1; i++) //for loop created to scanning through the array values (rows)
	{
		for(int k = 0; k < cols1; k++) //for loop created to scanning through the array values (cols)
		{
			printf("\t%0.1f\t", a[i][k]); //print out the array values in the correct format
		}
		printf("\n"); //nothing here, just a format to make the output looks better
	}
}

double regionAverage(double A[rows][cols], int topRow, int bottomRow, 
	int leftColumn, int rightColumn)
{	//function created to calculating the average of the values as described by the instruction
	int counter = 0; //variable counter was created and set to 0
	double sum = 0; //variable sum was created and set to 0
	for(int h = topRow; h <= bottomRow; h++) //for loop created to scanning through the array values (bottomRow)
	{
		for(int j = leftColumn; j <= rightColumn; j++) //for loop created to scanning through the array values (rightColumn)
		{
			counter++; //count how many values
			sum = sum + A[h][j]; //the sum equal to the sum of the values of the arrays
		}
	}
	double result = sum / counter; //result equal to the total divided by the counter
	return result;
}
//as said in the warning, the main function haven't been altered in any way
int main() 
{
    double a[rows][cols] = {{3.2,2.1,5.3}, {8.0,4.9,5.7},
    		{18.0,14.9,15.7}, {28.0,24.9,25.7},
    		{38.0,34.9,35.7}};
    printDoubleMatrix("a", a, rows,cols);
    double result = regionAverage(a, 0, 3, 1, 2);
    printf("regionAverage(a, 0, 3, 1, 2) returned %.2f.\n", result);
    result = regionAverage(a, 2, 4, 0, 2);
    printf("regionAverage(a, 2, 4, 0, 2) returned %.2f.\n", result);
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
