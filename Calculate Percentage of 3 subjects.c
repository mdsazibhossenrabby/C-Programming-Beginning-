#include <stdio.h>

int percentageSUB(int physics,int chemistry,int math);

int main()
{
	int physics,chemistry,math;
	
	printf("Enter the marks of Physics : ");
	scanf("%d",&physics);
	
	printf("\n\n Enter the marks of Chemistry : ");
	scanf("%d",&chemistry);
	
	printf("\n\n Enter the marks of Math : ");
	scanf("%d",&math);
	
	printf("The percentage is : %d",percentageSUB(physics, chemistry,math));
	
	return 0;
}

int percentageSUB(int physics,int chemistry,int math){
	return ((physics+math+chemistry)/3);
}
