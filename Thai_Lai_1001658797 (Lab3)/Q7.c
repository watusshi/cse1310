//Thai Lai
//1001658797
//Lab3 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 25min

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char txt[999]; //variable txt was declared 
    int chartotal = 0; //variable chartotal was declared and set to 0
    int similes = 0; //variable similes was declared and set to 0

    FILE *fp = fopen("similes.txt", "r"); //variable fp was declared to store the open file similes.txt
    FILE *fw = fopen("output.txt", "w"); //variable fw was declared to store the written file output.txt

    if(fp == NULL) // if statement create to catch erros when the file is not found
    { //if fp is equal to nothing
        printf("File not found\n"); //then print out File not found
        exit(1);
    }

    while (true) //while fp contains a value then...
    {
        if(fgets(txt, 200, fp) !=NULL) //if statement created to initiate the writing process
        {
            similes++; //this will count through the similar words it contains
            printf("%d)%s", similes, txt); //print out the similes and the text
            fprintf(fw, "%d)%s", similes, txt); //write it onto the file with all the format
            chartotal = chartotal + strlen(txt); //the total character is basically how many characters
        }                                               //are there in the file opened
        else break;
    }
    printf("\nTotal Similes: %d\n", similes); //print out Total similes and its values
    printf("Total characters in similes.txt: %d\n", chartotal); //print out total characters in similes.txt and its values
    fprintf(fw, "\nTotal Similes: %d\n", similes); //incrementing the output onto the file
    fprintf(fw, "Total characters in similes.txt: %d\n", chartotal); //incrementing the output onto the file
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