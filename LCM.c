#include <stdio.h>

int main()
{
	int a,b,x,lcm;
	
	printf("Enter first integer :" );
	scanf("%d",&a);
	
	printf("Enter second integer :" );
	scanf("%d",&b);
	
	if(a<b)
	{
		if(b%a==0)
		{
			lcm=b;
		} else
		 {
		 	lcm=a*b;
		 }
	}
	
	else if(b<a){
		if(a%b==0)
		{
			lcm=a;
		} else
		 {
		 	lcm=a*b;
		 }
	}
	 
	 printf("The LCM of %d and %d is : %d",a,b,lcm);
	
	
	return 0;
}