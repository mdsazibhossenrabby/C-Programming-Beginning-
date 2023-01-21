#include <stdio.h>

void swap(int i,j);
void Pswap(int *m,*n);

int main()
{
	//Without user defined function
	
	
	printf("\t Without user defined function\n\n\n");
	
	int a=5,b=10,temp;
	
	printf("Before passing value , value of a=%d and b=%d\n",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After passing value, value of a=%d and b=%d\n\n\n",a,b);
	
	
	
	
	//With user defined function 
	
	
	printf("\t With user defined function\n\n\n");
	
	int c=5,d=10;
	
	printf("Before passing , value of c=%d and d=%d\n",c,d);
	
	swap(c,d);
	
	printf("After passing function , value of c=%d and d=%d\n\n\n",c,d);
	
	
	//User defined function with Pointer.
	
	printf("\t With user defined function by pointer\n\n\n");
	
	
	int e=15,f=20;
	
	printf("Before passing , value of e=%d and f=%d\n",e,f);
	
	Pswap(&e,&f);
	
	printf("After passing function , value of e=%d and f=%d\n",e,f);
	
	
	return 0;
}


void swap(int i,j){
	int temp;
	
	temp=i;
	i=j;
	j=temp;
	
	printf("the calling function's valu of e=%d and f=%d\n",i,j);
	
	return;
}


void Pswap(int *m,*n){
	
	int temp;
	
	temp=*m;
	*m=*n;
	*n=temp;
	
	printf("the calling function's value of c=%d and d=%d\n",*m,*n);
	
	
	return;
}