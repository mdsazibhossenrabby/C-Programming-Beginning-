#include <stdio.h>
#include <string.h>

int main()
{
    //There are strcpy(),strncpy(),strlen(),strcat(),strncat(),strcmp(),strcasecmp() .
    
    //strlen
    
    char str[100]="Hello World!";
    int n=strlen(str);
    printf("The length : %d\n",n);

    //strcpy()
    char str1[100]="Hello",str2[100]=" Wor";
    strcpy(str1,str2);
    printf("%s\n",str1);

    //strncpy()

    char str3[100]="Hello",str4[100]="SAZIB";

    strncpy(str3,str4,3);

    printf("%s\n",str3);

    //strcat()

    char str5[100]="Hello",str6[100]=" World";

    strcat(str5,str6);

    printf("%s\n",str5);


    //strncat()

    char str7[100]="Hello",str8[100]="SAZIB";

    strncat(str7,str8,3);

    printf("%s\n",str7);

    //strcamp(); this is case sensetive
    char str9[10]="Hello",str10[100]="HELLO",str11[100]="World";

    int x=strcmp(str9,str10);
    int y=strcmp(str9,str11);

    printf("Compare 1 : %d ,  compare 2: %d \n",x,y);

    //strcasecmp(); It is not case sensetive


    int p=strcasecmp(str9,str10);
    int q=strcasecmp(str9,str11);


    printf("Compare 1.1 : %d ,  compare 2.1: %d \n",p,q);




    return 0;
}