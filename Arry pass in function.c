#include <stdio.h>

int getSum(int arr[])
{
	int sum=0;
	int i;
	
	for(i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	
	return sum;
}

int main()
{
	int number[5]={10,5,15,20,25};
	
	printf("Sum is %d",getSum(number));
	
	return 0;
}
	