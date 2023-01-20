#include <stdio.h>

void printInt(int k){
	if(k==0)
	{
		return;
	}
	
	printf("%d\n",k);
	
	printInt(k-1);
}

int main()
{
	int n;
	
	printf("Enter a integer : ");
	scanf("%d",&n);
	
	printInt(n);
	
	return 0;
}
