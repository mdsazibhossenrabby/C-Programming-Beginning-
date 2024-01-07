#include <stdio.h>
#include <string.h>

int main()
{
    char str[][6]={"Hello","Progr","Great"}; //The string length can not be logner thean 6 

    for(int i=0;i<3;i++){
        printf("%s\n",str[i]);
    }

    char str1[4][8]; //4 strings, size or length of every string is 8

    for(int i=0;i<4;i++){
        printf("Enter string NO.%d : ",i+1);
        gets(str1[i]);
    }

    for(int i=0;i<4;i++){
        printf("%s \n",str1[i]);
        
    }

    return 0;
}
