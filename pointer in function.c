#include <stdio.h>

void func1(int pNum){
	
	pNum=5;
	
	return;
}

void func2(int *Pnum){
	
	*Pnum=6;
	
	return;
}

int main()
{
	int num1=1;
	int num2=2;
	
	printf("Print 1st Number Before passing : %d\n",num1 );
	
	func1(num1);
	
	
	printf("Print 1st number after passing : %d\n",num1);
	
	
	printf("Print 2nd Number Before passing : %d\n",num2 );
	
	func2(&num2);
	
	
	printf("Print 2nd number after passing : %d\n",num2);
	
	
	return 0;
}
	
