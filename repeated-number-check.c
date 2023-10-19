#include<stdio.h>

int main()
{
    int digits[10]={0};
    int n;

    printf("Enter an Integer Number : ");
    scanf("%d",&n);

    int rem,count=0;
    while (n!=0)
    {
        rem=n%10;
        if(digits[rem]){
            count++;
        }
        digits[rem]+=1;
        n/=10;
    }

    if(count){
        printf("There is repeated digit in this number \n");
        printf("The repeation number of  digits : \n");
        for(int i=0;i<10;i++){
            if(digits[i]){
                printf("%d has %dtimes \n",i,digits[i]);
            }
        }

    }else{
        printf("There is no repeated digit in this number \n");
    }


    

    return  0;
}