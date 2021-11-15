//Thai Lai
//1001658797
//Lab3 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 15

#include <stdio.h>

int main()
{
    int arr1D[3] = {10, 20, 30}; //variable arr1d was created to store all the values for the array
    printf("=====================================================================\n");
    
    printf("1D Array\n"); //print out 1D Array
    printf("arr1D[3] = {10, 20, 30};\n"); //print out arr1D[3] = {10, 20, 30}

    printf("1D Array\n"); //print out 1D Array
    for (int x = 0; x < 3; x++) //for loop created to scanning through the array values (1D array)
    {
        printf("arr1D[%d] = %d \t", x, arr1D[x]); //print out the values of the array
    }
    printf("\n"); //nothing here, just a format to make the output looks better
    printf("=====================================================================\n");
    printf("2D Array\n"); //print out 2D array
    int arr2D[2][3] = {{10, 20, 30}, {40, 50, 60}}; //variable arr2D was created to store all the values for the array
    
    printf("arr2D[2][3] = {{10, 20, 30}, {40, 50, 60}};\n"); //print out the array description
    printf("\n"); //nothing here, just a format to make the output looks better

    for (int i = 0; i < 2; i++) //for loop created to scanning through the array values (rows)
    {
        for (int k = 0; k < 3; k++) //for loop created to scanning through the array values (cols)
        {
            printf("arr2D[%d][%d] = %d \t", i, k, arr2D[i][k]); //print out all the values in the correct format
        }
        printf("\n"); //nothing here, just a format to make the output looks better
    }
    printf("=====================================================================\n");
    printf("3D Array\n"); //print out 3D Array
    int arr3D[4][2][3] = {{{10, 20, 30}, {40, 50, 60}}, //variable arr3D was created to store all the values for the array
                          {{11, 21, 31}, {41, 51, 61}},
                          {{12, 22, 32}, {42, 52, 62}},
                          {{13, 23, 33}, {43, 53, 63}}};
    
    printf("arr2D[2][3] = {		{{10, 20, 30}, {40, 50, 60}},\n\t\t\t{{11, 21, 31},"); //print out the description
    printf(" {41, 51, 61}},\n\t\t\t{{12, 22, 32}, {42, 52, 62}},\n"); //of the array
    printf("\t\t\t{{13, 23, 33}, {43, 53, 63}}	};\n");

    printf("3D Array\n"); //print out 3D Array
    for (int h = 0; h < 4; h++) //for loop created to scanning through the array values (3D array)
    {
        for (int j = 0; j < 2; j++) //for loop created to scanning through the array values (3D array)
        {
            for (int m = 0; m < 3; m++) //for loop created to scanning through the array values (3D array)
            {
                printf("arr3D[%d][%d][%d] = %d \t", h, j, m, arr3D[h][j][m]); //print out all the values in the correct format
            }
            printf("\n"); //nothing here, just a format to make the output looks better
        }
        printf("\n"); //nothing here, just a format to make the output looks better
    }
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