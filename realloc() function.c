#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr=(int*)calloc(5,sizeof(int));

    printf("Enter numbers(5) :" );
    for(int i=0;i<=4;i++){
        scanf("%d",&ptr[i]);
    }

    ptr=realloc(ptr,8);

    printf("Enter Numbers(8) : ");
    for(int i=0;i<=7;i++){
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<=7;i++){

        printf("The number %d is = %d\n",i+1,ptr[i]);
    }

    //it prints last 8 iputs not first 5 inputs

    return 0;
}
