#include <stdio.h>

int main()
{
	int score;
	
	printf("Enter the Score(90,80,70,50,60,40,33) : ");
	scanf("%d",&score);
	
	switch(score)
	{
		case 90 : printf("A++");
				break;
		case 80 : printf("A+");
				break;
		default:printf("Nothing");
	}
	
	return 0;
	
}
