//Thai Lai
//1001658797
//Lab3 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 20

#include <stdio.h>

int main()
{
    long int decimalnumber =174;
    int remainder;
    int quotient;
    int i = 1;
    int j;
    char answer[100];

    quotient = decimalnumber;

    while(quotient != 0)
    {
        remainder = quotient % 16;

        //To convert integer into character
        if( remainder < 10)
            remainder = remainder + 48;		
        else
            remainder = remainder + 55;		

        answer[i++]= remainder;

        quotient = quotient / 16;
    }

    printf("\nThe decimal number %ld in hexadecimal form is: ", decimalnumber);
    
    for(j = i -1 ;j> 0;j--)
        printf("%c",answer[j]);

    printf("\n");
    return 0;
}

/** Converting from decimal to hexadecimal:

(174)10 = 174/16 ; Quotient = 10; [16*10] = 160 || 174 - 160 = 14
(174)10 = 10/16 ; Quotient = 0; [16*0] = 0 || 10 - 0 = 10

Since we got 14 and 10 which in the hexadecimal chart 14 is E and 10 is A
-> we could make them equal to AE

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