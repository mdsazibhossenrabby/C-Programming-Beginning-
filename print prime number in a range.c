#include <stdio.h>

int main()
{
	int n,m;
	
	printf("Enter the first number of range :");
	scanf("%d",&n);
	
	printf("\n Enter the last number of range :");
	scanf("%d",&m);
	
	for(int i=n;i<=m;i++)
	{
		if(i%2==0)
		{
			continue;
		}
		
		printf("%d\n",i);
	}
	
	return 0;
}
