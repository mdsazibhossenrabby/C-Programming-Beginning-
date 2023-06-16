#include <stdio.h>

int main()
{
    int n,rem,tem,sum=0;

    printf("Enter a number : ");
    scanf("%d",&n);

    tem=n;

    while(tem!=0){
        rem=tem%10;
        sum=sum+rem;
        tem=tem/10;
    }

    printf("The sum of all digits of %d number's is = %d",n,sum);

    return 0;
}