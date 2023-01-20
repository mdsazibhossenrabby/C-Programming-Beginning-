#include <stdio.h>

int main()
{
	int n;
	
	printf("Enter a Natural Number : ");
	scanf("%d",&n);
	
	printf("\n\n Print First %dth number forward : \n\n",n);
	for(int i=1;i<=n;i++)
	{
		printf("%d\n",i);
	}
	
	printf("\n\n Print First %dth number reverse : \n\n",n);
	
	for(int i=n;i>=1;i--)
	{
		printf("%d\n",i);
	}
	
	return 0;
	
}