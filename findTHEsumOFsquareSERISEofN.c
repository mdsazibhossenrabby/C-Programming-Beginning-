#include <stdio.h>

int main()
{
    int n,sum=0;

    printf("Enter an Integer :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum=sum+(i*i);
    }

     printf("The sum of the serise is -----\n");
    for(int j=1;j<=n;j++){
        if(j!=n){
            printf("%d^2+",j);
        } else{
            printf("%d^2 = %d\n",j,sum);
        }
    }
   ;


    return 0;
}