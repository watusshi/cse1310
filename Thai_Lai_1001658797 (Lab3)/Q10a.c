//Thai Lai
//1001658797
//Lab3 (CSE-1310-007)
//Professor Bhanu Jain
//Time take: 20

#include <math.h>
#include <stdio.h>


int convert(long long binary) 
{
    int answer = 0, i = 0, remainder;
    while (binary != 0) 
    {
        remainder = binary % 10;
        binary /= 10;
        answer += remainder * pow(2, i);
        ++i;
    }
    return answer;
}

int main() 
{
    long long binary = 11010111;
    printf("The existence %lld in binary form is equal to %d in decimal form ",
           binary, convert(binary));
    return 0;
}

/**Converting from binary to decimal:

11010111 = [1 * 2^7] + [1 * 2^6] + [0 * 2^5] + [1 * 2^4] + [0 * 2^3]
            + [1 * 2^2] + [1 * 2] + [1 * 2^0] = 215

- So basically, I'm converting this binary by seperating each of the digits and 
do them in order, then eventually add them up together which will give us the 
final answer 215


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


