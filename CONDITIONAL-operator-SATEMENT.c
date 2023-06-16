#include <stdio.h>

int main()
{
    int a,b;

    printf("If entered number is less than 10 the the value of b will be 0 otherwise 2\n");
    printf("Enter a number : ");
    scanf("%d",&a);

    b=(a<10)?0:2;

    printf("The value of b is = %d",b);



    return 0;
}