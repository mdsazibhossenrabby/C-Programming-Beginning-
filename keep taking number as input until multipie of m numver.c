#include <stdio.h>

int main()
{
	int n,m;
	printf("Enter the number which multiple number you don't want to print : ");
	scanf("%d",&m);
	
	while(1)
	{
		printf("\n\n Enter your Number :" );
		scanf("%d",&n);
		
		if(n%m==0)
		{
			break;
		}
	}
	
	printf("\n End");
	
	return 0;
}