#include <stdio.h>

int main()
{
    int digit[10]={0}; //In the number system there are 10 digits (0-9)
    int rem,n;
    int count=0;

    printf("Enter ypur number : ");
    scanf("%d",&n);

    int tmp=n;

    while(tmp!=0){

        rem=tmp%10;

        if(digit[rem]){
            printf("There are Repeated Digits in this number\n\n");
            break;
        }else{
            digit[rem]+=1;

            count++;
        }
        tmp=tmp/10;
    }
    if(!count){
        printf("There are no Repeated Digits in this number\n\n");
    }
    

    int digits[10]={0};

    printf("The repeted digits  -------------\n");

    while(n!=0){
        int rem1=n%10;
        digits[rem1]+=1;
        n/=10;
    }
    for(int i=0;i<10;i++){
        printf("%d has repeated %d times\n",i,digits[i]);
    }

    return 0;
}