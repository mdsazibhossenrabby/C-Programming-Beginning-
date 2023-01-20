#include <stdio.h>

int main()
{
	int n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	if(n%2!=0)
	{
		printf("%d is a prime number ",n);
	} else
	 {
	 	printf("%d is not a prime number",n);
	 }
	
	return 0;
}