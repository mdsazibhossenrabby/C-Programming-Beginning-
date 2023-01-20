#include <stdio.h>

int main()
{
	//First Mathod
	
	int n,sum;
	
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	sum=n*(n-n/2)/2;
	
	printf("\n\n First %dth numbers's sum is : %d",n,sum);
	
	//Second Mathod
	
	int m,addsum;
	
	printf("\n\nEnter a Number : ");
	scanf("%d",&m);
	
	addsum=0;
	
	for(int i=1;i<=m;i++)
	{
		if(i%2==0)
		{
			continue;
		}
		
		addsum=addsum+i;
	}
	
	printf("\n\n First %dth numbers's sum : %d",m,addsum);
	
	
	
	return 0;
}