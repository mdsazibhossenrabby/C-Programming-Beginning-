#include <stdio.h>
#include <string.h>

int main()
{
	char sentence[100000];
	char ch;
	int i,count=0;
	
	printf("Enter you sentences :");
	gets(sentence);
	
	printf("Enter a character to find its count : ");
	scanf("%c",&ch);
	
	for(i=0;sentence[i]!='\0';i++)
	{
		if(ch==sentence[i])
		{
			++count;
		}
	}
	
	printf("Ther of character %c is : %d",ch,count);
	
	
	
	return 0;
}