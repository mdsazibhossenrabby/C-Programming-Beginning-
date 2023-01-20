#include <stdio.h>

int main()
{
	int a,b,x,gcd;
	
	printf("Enter first integer :" );
	scanf("%d",&a);
	
	printf("Enter second integer :" );
	scanf("%d",&b);
	
	if(a==0)
	{
		gcd=b;
	} else if(b==0){
		gcd=a;
	}
	
	else if(a!=0 && b!=0){
	
	if(a<b)
	{
		x=a;
	} else
	 {
	 	x=b;
	 }
	 }
	 
	 for(;x>=1;x--)
	 {
	 	if(a%x==0 && b%x==0)
	 	{
	 		gcd=x;
	 		break;
	 	}
	 }
	 
	 
	 
	 printf("The GCD of %d and %d is : %d",a,b,gcd);
	
	
	return 0;
}
