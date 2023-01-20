#include <stdio.h>

int main()
{
	int n,i,count;
	
	printf("Enter a Integer : ");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
	}
	
	if(count==0 && n!=1)
	{
		printf("%d is a prime number \n",n);
	} else
	 {
	 	printf("%d is not a prime number \n",n);
	 }
	
	
	
	return 0;
}
