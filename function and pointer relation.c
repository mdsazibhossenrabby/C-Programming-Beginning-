#include <stdio.h>

//One function can return one value only.

int simple(int a,b);
int simple1(int a,b);

//Multiple value return in one function by opinter.

void mvrfp(int a,b,*sum,*prod,*avg);


//without returning


void sss(int a,b,sum,prod,avg);



int main()
{
	int m,n;
	
	printf("Enter a integer : ");
	scanf("%d",&m);
	
	printf("Enter other integer : ");
	scanf("%d",&n);
	
	//one value return.
	
	printf("The sum  is : %d\n",simple(m,n) );
	
	simple1(m,n);
	
	
	
//Multiple value return in one function by opinter.
	
	int sum,product,average;
	
	mvrfp(m,n,&sum,&product,&average);	
	
	printf("the Sum1 is = %d\n The product1 is = %d\n The Average1 is = %d\n\n\n\n",sum,product,average);
	
	//without returning
	
	int sum1,product1,average1;
	
	
	sss(m,n,sum1,product1,average1);
	
	
	
	return 0;
}

//one value return.

int simple(int a,b){
	
	int sum=a+b;
	
	return sum;
}

int simple1(int a,b){
	
	int sum=a+b;
	
	printf("The sum1 is : %d\n\n\n",sum);
	
	return 0;
}

//Multiple value return in one function by opinter.

void mvrfp(int a,b,*sum,*prod,*avg){
	
	*sum=a+b;
	*prod=a*b;
	*avg=(a+b)/2;
	
}

//without returning

void sss(int a,b,sum,prod,avg){
	
	sum=a+b;
	prod=a*b;
	avg=(a+b)/2;
	
	
	printf("the Sum is = %d\n The product is = %d\n The Average is = %d\n",sum,prod,avg);
}


