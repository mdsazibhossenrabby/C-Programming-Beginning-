#include <stdio.h>

int main()
{
	int ft_marks,st_marks,final_marks;
	double ft_per, st_per,final_per,total_marks;
	
	printf("Enter first exam marks :");
	scanf("%d",&ft_marks);
	
	printf("Enter second exam marks :");
	scanf("%d",&st_marks);
	
	printf("Enter final exam marks :");
	scanf("%d",&final_marks);
	
	printf("Enter first exam percentage :");
	scanf("%d",&ft_per);
	
	printf("Enter first exam percentage :");
	scanf("%d",&st_per);
	
	printf("Enter first exam percentage :");
	scanf("%d",&final_per);
	
	total_marks= ((ft_marks * ft_per)/100.00)+((st_marks * st_per)/100.00)+((final_marks * final_per)/100.00);
	
	printf("The total marks of student :  %lf",total_marks);
	
	
	
	return 0;
}
