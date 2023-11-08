#include <stdio.h>

int main()
{
    int ar[]={1,2};
    int arr[10]={1,2};

    int n=sizeof(ar)/sizeof(ar[0]);
    int m=sizeof(arr)/sizeof(arr[0]);

    printf("Size : %d\n",n);
    printf("Size : %d\n",m);

    return 0;
}