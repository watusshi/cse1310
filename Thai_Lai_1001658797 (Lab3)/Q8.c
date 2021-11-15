//Thai Lai
//1001658797
//Lab3 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 75min

#include <stdio.h>
#include <math.h>
#define N 5

void printArray(char name[999], float a[], int n);
{ //function created to print out the values of the array
    printf("%25s: ", name); //explained by professor Bhanu Jain in lecture
    for(int i = 0; i < n; i++) 
    {
        printf("%8.2f ", a[i]);
    }
    printf("\n");
}

void fprintfArray(FILE *f, char name[999], float a[], int n);
{ //function created to print out the values of the array in a file
    fprintf(f, "25s: ", name);
    for(int k = 0; k < n; k++) //explained by professor Bhanu Jain in class
    {
        fprintf(f, "%8.2f ", a[k]);
    }
    fprintf(f, "%s", "\n");
}

float *arrayCirc(float A[]);
{ //function created to calculating the array (radius type form)
    float *circumferences = (float*) malloc (N *sizeof(float));
    for(int c = 0; c < N; c++)   //explained by professor Bhanu Jain in lecture
    {
        circumferences[c] = 2 * M_PI * A[c];
    }
    return circumferences; 
}

float *arrayArea(float A[]);
{ //function created to calculating the array (radius type form)
    float *areas = (float*) malloc (N *sizeof(float));
    for(int a = 0; a < N; a++)   //explained by professor Bhanu Jain in lecture
    {
        areas[a] = M_PI * pow (A[a], 2);
    }
    return areas;
}

int main()
{
    FILE *fwArea, *fwCirc; //variable fwArea and fwCirc was declared
    char outArea[999] = "outArea.txt"; //variable outArea was declared to store the mentioned file values
    char outCirc[999] = "outCirc.txt"; //variable outCirc was declared to store the mentioned file values

    fwArea = fopen(outArea, "w"); //varaible fwArea are set to use the values of the string values from outArea
    fwCirc = fopen(outCirc, "w"); //varaible fwCirc are set to use the values of the string values from outCirc

    float radius1[N] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0}; //variable radius1 was declared to store all the values for the array
    float *circumferences = arrayCirc(radius1); //variable circumferences was declared to store the datas of circumference calculations
    float *areas = arrayArea(radius1); //variable areas was declared to store the datas of area calculations
    
    printArray("radius1", radius1, N); //print out the array in the system output
    fprintArray(fwArea, "radius1", radius1, N); //write out the values of the variable onto the mention file
    printArray("Area(radius1)", areas, N); //print out the array in the system output
    fprintArray(fwArea, "Area(radius1)", areas, N); //write out the values of the variable onto the mention file
    printf("\n"); //noting here, just a format to make the output looks better
    printArray("radius1", radius1, N); //print out the array in the system output
    fprintArray(fwCirc, "radius1", radius1, N); //write out the values of the variable onto the mention file
    printArray("Circumference(radius1)", circumferences, N); //write out the array in the system output
    fprintArray(fwCirc, "Circumference(radius1)", circumferences, N); //write out the values of the variable onto the mention file

    fclose(fwArea); //close the mention file
    fclose(fwCirc); //close the mention file

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

