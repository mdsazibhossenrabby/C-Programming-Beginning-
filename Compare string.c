#include <stdio.h>
#include <string.h>

int main()
{
	int comp;
	
	char string1[50],string2[50];
	
	printf("Enter String1 Data : ");
	gets(string1);
	
	printf("Enter String2 Data : ");
	gets(string2);
	
	comp=strcmp(string1,string2);
	
	if(comp<0)
	{
		printf("String1 is less than  string2");
	} else if(comp>0)
	  {
	  	printf("String1 is greater than string2");
	 } else{
	 	printf("String1 is equal to string2");
	 }
	
	
	
	return 0;
}