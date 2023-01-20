

#include <stdio.h>

int main()
{
	int marks;
	
	printf("Enter Your Marks : ");
	scanf("%d",&marks);
	
	if(0<=marks<30)
	{
		printf("Your grade is C");
	}
	else if(30<=marks<70)
	{
		printf("Your grade is B");
	}
	
	else if(70<=marks<90)
	{
		printf("Your grade is A");
	}
	
	else if(90<=marks<=100)
	{
		printf("Your grade is A+");
	}
	
	else
	{
		printf("You Entered Wrong marks");
	}
	
	
    
	return 0;

}