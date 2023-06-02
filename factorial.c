#include <stdio.h>

int main()
{
    int n;
    long int fact=1;

    printf("Enter an Enteger : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        fact=fact*i;
    }

    printf("The factorial of %d is : %ld\n\n",n,fact);

    return 0;
}