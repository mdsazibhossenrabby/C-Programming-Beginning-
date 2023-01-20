#include <stdio.h>

int main()
{
	/* we are goin to print n to m all odd numbers include n and m */
	
	int n,m;
	
	printf("Enter the First number of print range : ");
	scanf("%d",&n);
	
	printf("\nEnter the First number of print range : ");
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
