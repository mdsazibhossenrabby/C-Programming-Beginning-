#include <stdio.h>

int main()
{
	int n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	if(n>=1)
	{
		printf("This is a Natural Number");
	}
	else
	{
		printf("This is not a Natural Number");
	}
	
	return 0;
}