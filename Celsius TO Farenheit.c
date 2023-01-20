#include <stdio.h>

int main()
{
	double celsius,farenheit;
	
	printf("Enter the Temperature in Celsius :");
	scanf("%lf",&celsius);
	
	farenheit=celsius*5/9+32;
	
	printf("\nTemperature in Farenheit is : %lf",farenheit);
	
	
	return 0;
}
