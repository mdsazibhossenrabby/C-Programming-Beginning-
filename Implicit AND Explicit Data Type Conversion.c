#include <stdio.h>

int main()
{
	int n;
	
	
	//Implicit Data type conversion.
	
	printf("Implicit Data Type Conversion\n\n");
	
	n=10.995;
	
	printf("Value of n : %d",n);
	
	
	//Explicit Data Type Conversion .
	
	printf("\n\n\nExplicit Data Type Conversion\n\n ");
	
	
	double m;
	
	
	m=10.995;
	
	printf("Value of real m : %lf\n",m);
	
	m=(int)10.995;
	
	printf("Value of coverted m : %lf ",m);
	
	
	return 0;
	
}