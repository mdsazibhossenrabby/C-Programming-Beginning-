﻿#include <stdio.h>

int main()
{
	int i, j,n;
	
	printf("Enter which number's stair you want :");
	scanf("%d",&n);
	
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
	
	
	return 0;
}
