#include <stdio.h>

int main()
{
    int f,s,next,n;

    printf("Enter an Integer (whic is the last term of fibonacci) : ");
    scanf("%d",&n);

    f=0;
    s=1;
    printf("The Fibonacci Series is : %5d %5d",f,s);

    while((f+s)<n){
        next=f+s;
        printf("%5d",next);
        f=s;
        s=next;
    }



    return 0;
}