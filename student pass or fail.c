#include <stdio.h>

int main()
{
	/* write a program if a student pass or fail. 
	  marks>30 PASS
	  marks<=30 FAIL
	 */
	
	int marks;
	
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	if(marks>30 && marks<=100)
	{
		printf("You are passed");
	}
	
	else if(marks>=0 && marks<=30){
		printf("You are failed");
	}
	
	else
	{
		printf("Wrong Marks");
	}
	
	return 0;
}
