#include <stdio.h>

int main()
{
    int mat[3][3];
    char ch[]={'A','B','C'};

//Reading Or input part

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter %c%d%d value : ",ch[i],i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }

    printf("\n \n The Matrix is \n\n");

//Printing or showing Part

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("|%3d|",mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}