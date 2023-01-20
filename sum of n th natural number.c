#include <stdio.h>

int main()
{
	int n,sum;
	
	printf("Enter a Natural Number : ");
	scanf("%d",&n);
	
	sum=0;
	
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
		
	}

	if(n>=1)
	{
		 printf("\n\n\n Here is sum of first %dth natural number : %d ", n,sum);
	 } 
	 else
	  {
	  	printf("Invalid Input");
	  }
	  
	  
	
	return 0;
}
