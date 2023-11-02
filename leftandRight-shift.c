#include <stdio.h>

void leftShift(int ar[], int size, int x,int y){
    int temp=ar[x];
    for(int i=x+1;i<=y;i++){
        ar[i-1]=ar[i];
    }
    ar[y]=temp;

    printf("Arry After Left Shifting : ");
    for(int i=0;i<size;i++){
        printf("%3d",ar[i]);
    }
    printf("\n");
}


void rightShift(int ar[], int size, int x,int y){
    int temp=ar[y];
    for(int i=y;i>=x;i--){
        ar[i]=ar[i-1];
    }
    ar[x]=temp;

    printf("Arry After Right Shifting : ");
    for(int i=0;i<size;i++){
        printf("%3d",ar[i]);
    }
    printf("\n");
}

int main()
{
    int SIZE,m,n;
    printf("Enter The size of an Array : ");
    scanf("%d",&SIZE);
    printf("Enter two number(m ,n) as index numbers (m>n): ");
    scanf("%d %d",&m,&n);
    int arr1[SIZE],arr2[SIZE];

    //taking values in arry1
    for(int i=0;i<SIZE;i++){
        arr1[i]=i+5;
    }
     //taking values in arry2
    for(int i=0;i<SIZE;i++){
        arr2[i]=i+5;
    }

    printf("Original Array1 : ");
    for(int i=0;i<SIZE;i++){
        printf("%3d",arr1[i]);
    }
    printf("\n");

    leftShift(arr1,SIZE,m,n);

    //start Right Shifting
    printf("\n");
    printf("Original Array2 : ");
    for(int i=0;i<SIZE;i++){
        printf("%3d",arr2[i]);
    }
    printf("\n");

    rightShift(arr2,SIZE,m,n);

    return 0;
}