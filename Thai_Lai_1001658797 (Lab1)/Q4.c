//Thai Lai
//1001658797
//Lab1 (CSE-1310-007)
//Professor Bhanu Jain
//Time taken: 5min

#include <stdio.h>
#include <math.h>

int main () {
	double c = 300000000; //variable c declared
	double m; //variable c declared
	printf("Please enter the mass of the spacecraft (kg): "); //asking the user to input the mass in kg
	scanf("%lf",&m); //capture the userinput and store it into m

	double v; //variable v declared
	printf("Please enter the moving speed of the spacecraft (m/s): "); //asking the user to input the speed in m/s
	scanf("%lf",&v); //capture the userinput and store it into v

	double m_relative = m/sqrt(1-pow(v,2)/pow(c,2)); //variable m_relative declared and calculations
	double E = m_relative * pow(c,2); //variable E declared and calculations

	printf("%0.1f kg\n",m_relative); //print out the value of m_relative
	printf("%0.1f J",E); //print out the value of E

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