#include <stdio.h>

#define size 10

int main()
{
    int arr[size]={11,12,21,22,31,32,41,42,51,52};

    printf("Revesre all elements--------------------\n\n");
    for(int i=0;i<size/2;i++){
        int temp = arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }

    printf("The Reversed elements are : ");
    for(int i=0;i<size;i++){
        printf("%4d",arr[i]);
    }

     int arr1[size]={11,12,21,22,31,32,41,42,51,52};
     int n,m;

    printf("Revesre specific  elements --------------------\n\n");
    printf("Enter two index number(0-9) : ");
    scanf("%d %d",&n,&m);

    for(int i=n;i<=n+(m-n)/2;i++){
        int temp = arr1[i];
        arr1[i]=arr1[n+m-i];
        arr1[n+m-i]=temp;
    }

    printf("The the specific  Reversed elements between index %d and %d are : ",n,m);
    for(int i=0;i<size;i++){
        printf("%4d",arr1[i]);
    }

    return 0;
}