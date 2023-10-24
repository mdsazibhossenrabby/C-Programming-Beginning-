//Arry pass in function as argument, Two ways to do

#include <stdio.h>

int add(int ar[],int l);
int add1(int *ar,int l);

int main()
{
    int arr[]={4,5,6,7};
    int len=sizeof(arr)/sizeof(arr[0]);

    int summ=add(arr,len);
    printf("The sum is : %d\n\n",summ);


    int sumn=add1(arr,len);
    printf("The sum by other method is : %d",sumn);

    printf("\n");
    return 0;
}


int add(int ar[],int l){
    int sum=0;
    for(int i=0;i<l;i++){
        sum+=ar[i];
    }
    return sum;
}
int add1(int *ar,int l){
    int sum=0;
    for(int i=0;i<l;i++){
        sum+=(*ar+i);
    }
    return sum;
}