#include <stdio.h>

int main()
{
    //For Left Shift----------------------------------------------------

    int arr[]={00,11,22,33,44,55,66,77,88,99};
    printf("Original Array Elements : ");
    for(int i=0;i<10;i++){
        printf("%3d",arr[i]);
    }
    printf("\n");
    int temp=arr[0];
    for(int i=1;i<10;i++){
        arr[i-1]=arr[i];
    }
    arr[9]=temp;

    printf("After Left Shifting : ");
    for(int i=0;i<10;i++){
        printf("%3d",arr[i]);
    }
    printf("\n");

    //For Right Shift--------------------------------------

    printf("\n\n");
    int arr1[]={00,11,22,33,44,55,66,77,88,99};
    printf("Original Array Elements : ");
    for(int j=0;j<10;j++){
        printf("%3d",arr1[j]);
    }
    printf("\n");

    int tem=arr1[9];
    for(int j=9;j>=0;j--){
        arr1[j]=arr1[j-1];
    }
    arr1[0]=tem;

    printf("After Right Shifting  :   ");
    for(int j=0;j<10;j++){
        printf("%3d",arr1[j]);
    }
    printf("\n");

    //left and right Shifting between n1 and n2 element 0<= n1,n2<size--------------

    int arr2[]={00,11,22,33,44,55,66,77,88,99};

    int n1,n2;
    printf("Enter two number between (0 to 9) : ");
    scanf("%d %d",&n1,&n2);
    if(n1>n2){    //make sure n1<n2
        int temm=n1;
        n1=n2;
        n2=temm;
    }

    //left shift

    int tempp=arr2[n1];
    for(int i=n1;i<n2;i++){
        arr2[i]=arr2[i+1];
    }
    arr2[n2]=tempp;
    printf("After Left Shifting  :   ");
    for(int j=0;j<10;j++){
        printf("%3d",arr2[j]);
    }
    printf("\n");

    //right shift
    int arr3[]={00,11,22,33,44,55,66,77,88,99};
    int temmpp=arr3[n2];
    for(int i=n2;i>n1;i--){
        arr3[i]=arr3[i-1];
    }
    arr3[n1]=temmpp;

    printf("After Right Shifting  :   ");
    for(int j=0;j<10;j++){
        printf("%3d",arr3[j]);
    }
    printf("\n");




    return 0;
}