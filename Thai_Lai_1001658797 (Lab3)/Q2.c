//Thai Lai
//1001658797
//Lab3 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 10min

#include <stdio.h>
#include <string.h>
#define max1 4
#define max2 8
#define strlen 10

void arrayMerge (char result[][strlen], char a[][strlen], char b[][strlen])
{               //function created to merge the values of the array
    int hacknet = 0; //variable hacknet was created and set to 0
    for(int i = 0; i < max1; i++, hacknet++) //for loop created to initiating the data of a1
        strcpy(result[hacknet], a[i]); 
    for(int k = 0; k < max2; k++, hacknet++) //for loop created to initiating the data of b1
        strcpy(result[hacknet], b[k]);
}

void printStringArray(char name[], char a[][strlen], int len)
{  //function created to print out the character of the array (which is also the value of the array)
    printf("%7s: ", name); //print out the titles
    for(int h = 0; h < len; h++) //for loop created to scan through the array and print them out
        printf("%-12s", a[h]);
    printf("\n"); //nothing here, just a format to make the output looks better
}
//as said in the warning, the main function haven't been altered in any way
int main()
{
    char a1[max1][ strlen] = {"Arlington", "Plano", "Laredo","Austin"};
    char b1[max1][ strlen] = {"Amarillo", "McKinney", "Frisco", "Pasadena"};
    char result1[max2][ strlen];
    printf("\n");
    printStringArray("a1", a1,max1);
    printStringArray("b1", b1, max1);
    arrayMerge(result1, a1, b1);
    printStringArray("result1", result1,max2);
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

