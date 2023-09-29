#include <stdio.h>

int main()
{
    int arr[10]={11,22,33,44,55,66,77,88,99,100};
    int *ptr1=&arr[2];
    int *ptr2=&arr[8];

    printf("Initial value of ptr1 : %p\n",ptr1);
    printf("Initial value at address of ptr1 : %d\n",*ptr1);
    printf("Initial value of ptr2 : %p\n",ptr2);
    printf("Initial value at address of ptr2 : %d\n",*ptr2);

    //Substructing both pointer

    printf("\n\n\n");

    printf("The element is : %d\n",*ptr2-*ptr1);
    printf("The the address difference betweeen them (bytes) is : %d\n",(int)(ptr2-ptr1));




    return 0;
}
