#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of pyramid : ");
    scanf("%d",&n);

    for(int i=n;i>=1;i--){
        for(int j=(n-i);j<n;j++){
            printf("%d",i);
        }

        printf("\n");
    }

    return 0;
}