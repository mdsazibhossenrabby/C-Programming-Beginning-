#include <stdio.h>

int main()
{
	int a,b;
	char sign;
	
	printf("Calculation point :");
	scanf("%d %c %d",&a,&sign,&b);
	
	if(sign!='+' && sign!='-' && sign!='*' && sign!='/'){
		
		printf("Invalid Operation. Enter valid operator."); 
		
	}  else if(sign=='+') {
	  	printf("Result is : %d",a+b);
    } else if(sign=='*'){
    	printf("Result is : %d",a*b);
    } else if(sign=='-'){
    	printf("Result is : %d",a-b);
    } else if(sign=='/'){
    	printf("Result is : %d",a/b);
    }
    
	
	
	return 0;
}
