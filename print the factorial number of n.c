#include <stdio.h>

int main()
{
	int n,factorial;
	
	printf("Enter a natural number(1-16) : ");
	scanf("%d",&n);
	
	factorial=1;
	
	for(int i=1;i<=n;i++)
	{
		factorial*=i;
	}
	
	printf("Here is the factorial of %d : %d ",n,factorial);
	
	return 0;
	
}