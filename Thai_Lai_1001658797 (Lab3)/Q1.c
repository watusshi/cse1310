//Thai Lai
//1001658797
//Lab3 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 5min

#include <stdio.h>
#define N 5
#include <math.h>

void printDoubleArray(char name[], double a[], int n)  
{                    //function created for printing the array values                        
    printf("%20s: ",name); //print out the array (table) keywords
    for(int i = 0; i < n; i++) //for loop created for scanning through the array
    {
        printf("%7.2f", a[i]); //print out all the values
    }
    printf("\n"); //nothing here, just a format to make the array easier to see
    return;
}

double *arraySquare(double A[]) //function created to basically initate
{                       //the squaring effect on all the array values (^2)
    static double result[N]; //static variable result was created (which can be accessible by all functions)
    for(int k = 0; k < N; k++) //for loop created to scan through the array 
    {
        result[k] = pow(A[k],2); //incrementing the squaring effect on the values
    }
    return result; 
}
//as said in the warning, the main function haven't been altered in any way
int main()
{
    double a[] = {3.2,2.1,5.3,8.0,4.9};
    double b[] = {1.1,2.2,3.3,4.4,5.50};
    double *result = arraySquare(a);
    printDoubleArray("a", a, N);
    printDoubleArray("arraySquare(a)", result, N);
    result = arraySquare(b);
    printf("\n");
    printDoubleArray("b", b,N);
    printDoubleArray("arraySquare(b)", result, N);
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
