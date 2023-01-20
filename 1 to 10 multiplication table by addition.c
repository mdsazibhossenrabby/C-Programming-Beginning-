#include <stdio.h>

int main()
{
	int n,m,i;
	
	
	m=0;
	
	for(n=1;n<=10;n++)
	{
		for(i=1;i<=10;i++)
		{
			m=m+n;
			
			printf("%d x %d = %d\n",n,i,m);
		}
	}
	
	
	return 0;
	
}