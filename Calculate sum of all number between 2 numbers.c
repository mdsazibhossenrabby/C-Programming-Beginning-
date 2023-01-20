#include <stdio.h>

int main()

{
	int n,m,sum;
	
	printf("Enter the First number : ");
	scanf("%d",&n);
	
	printf("\nEnter the Last number  : ");
	scanf("%d",&m);
	
	sum=0;
	for(int i=n;i<=m;i++)
	{
		sum=sum+i;
	}
	
	if(m>n)
	{
		printf("The sum of all number of %d to %d including %d and %d is : %d",n,m,n,m,sum);
	}
	else
	{
		printf("The Last number must be greater than first number ");
	}
	
	return 0;
}
