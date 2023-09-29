#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Points to the first element of arr

    printf("Initial pointer value: %p\n", ptr);
    printf("Initial arry value: %d\n", *ptr);

    // Incrementing the pointer
    ptr++;
    printf("After incrementing: %p\n", ptr);
    printf("After incrementing value of arry : %d\n", *ptr);

    // Decrementing the pointer
    ptr--;
    printf("After decrementing: %p\n", ptr);
    printf("After decrementing value of arry : %d\n", *ptr);


    printf("\n\n\n");

    //For another one

    int arr1[5] = {10, 20, 30, 40, 50};
    int *ptr1 = arr1;  // Points to the first element of arr

    printf("Initial pointer value: %p\n", ptr1);
    printf("Initial arry value: %d\n", *ptr1);

    // Adding integer to the pointer
    ptr1=ptr1+3;
    printf("After adding integer(3) to the pointer: %p\n", ptr1);
    printf("After adding integer(3) to pointer, value of arry : %d\n", *ptr1);

    // Decrementing the pointer
    ptr1=ptr1-3;
     printf("After subtrscting integer(3) from the pointer: %p\n", ptr1);
    printf("After subtrscting integer(3) from pointer, value of arry : %d\n", *ptr1);

    return 0;
}
