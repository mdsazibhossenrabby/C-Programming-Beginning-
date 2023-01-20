#include <stdio.h>

int main()
{
	int n,m,i;
	
	printf("Enter First Number (10-99) : ");
	scanf("%d",&n);
	
	
	for(;;){
		
		if(n<=9){
			printf("Invalid Input. Enter 10 to 99");
			break;
		}
		
	printf("\n Enter Second Number(10-99) : ");
	scanf("%d",&m);
	
	for(i=n;i<=m;i++)
	{
		
		if(m<=n){
			printf("Invalid Input. Enter greater than first number");
			break;
		}
		
		else if(i%11==0){
			continue;
		}
		
		printf("%d\n",i);
		
	}
	
	}
	
	return 0;
}
