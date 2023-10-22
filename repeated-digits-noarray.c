#include <stdio.h> 

int main()
{
    int num;

    printf("Enter an Integer number : ");
    scanf("%d",&num);
    if(num<0){
        num=-num;
    }
    int rep=0;
    while(num>0){
        int cDigit=num%10;
        int rNum=num/10;
        while(rNum>0){
            int nextDigit=rNum%10;
            if(cDigit==nextDigit){
                rep++;
                break;
            }
            rNum/=10;
        }
        if(rep){
            break;
        }
        num/=10;
    }

    if(rep){
        printf("There are repeated digits in the number \n");
    }else{
        printf("There is no repeated digit in the number \n");
    }

    return  0;
}