//Pointer to pointer Subtraction and Addition

#include <stdio.h>

int main()
{
   int arr[10]={12,13,22,23,32,33,42,43,52,53};

   int *ptr1=&arr[2];
   int *ptr2=&arr[7];

   int n=ptr2 - ptr1 ;

   printf("The value of ptr1 OR address of arr[2] : %d \n ",ptr1);
   printf("The value of ptr2 OR address of arr[7] : %d \n ",ptr2);
   printf("The value of ptr2-ptr1 OR n : %d \n ",n);
   printf("The value of *ptr2-*ptr1 OR the value of arr[7-2] means arr[7]-arr[2]: %d \n ",*ptr2-*ptr1);

    return 0;
}
