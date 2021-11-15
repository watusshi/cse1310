//Thai Lai
//1001658797
//Lab3 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 15min

#include <stdio.h>
#define rows 2
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
	return;
}

void matrixSmallest(double result[rows][cols], 
			double A[rows][cols], 
			double B[rows][cols])
{  //function injected to finding the smaller value in the array
	for(int i = 0; i < rows; i++) //for loop created to scanning through the array values (rows)
	{
		for(int j = 0; j < cols; j++) //for loop created to scanning through the array values (cols)
		{
			if(A[i][j] < B[i][j]) //if the value in array A is smaller than array B
			{
				result[i][j] = A[i][j]; //then result will be A (which will be printed out)
			}
			else if(A[i][j] > B[i][j]) //otherwise, if A is larger than B
			{
				result[i][j] = B[i][j]; //then result will be B (which will be printed out)
			}
		}
	}
	return;
}
//as said in the warning, the main function haven't been altered in any way
int main()
{
	double a1[rows][cols] = {{3.7, 2.0, 5.6}, {9.0, 5.9, 1.7}};
	double b1[rows][cols] = {{1.1, 2.2, 3.3}, {4.4, 5.5, 6.6}};
	double result1[rows][cols];
	printDoubleMatrix("a1", a1, rows, cols);
	printDoubleMatrix("b1", b1, rows, cols);
	matrixSmallest(result1, a1, b1);
	printDoubleMatrix("result1", result1, rows, cols);
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
