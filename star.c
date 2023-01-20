#include <stdio.h>

int main()
{
	char star;
	
	star='*';
	
	for(int i=1;i<=8;i++)
	{
		printf("%c",star);
		
		if(i==8)
		{
			printf("\n");
			
			for(int j=1;j<=8;j++)
			{
				printf("%c",star);
				
				if(j==8)
				{
					printf("\n");
					
					for(int k=1;k<=8;k++)
					{
						printf("%c",star);
						
						if(k==8)
						{
							printf("\n");
							
							for(int l=1;l<=8;l++)
							{
								printf("%c",star);
							}
						}
					}
				}
			}
		}
	}
	
	
	return 0;
}
