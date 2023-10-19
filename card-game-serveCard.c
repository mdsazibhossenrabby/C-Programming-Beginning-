#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int  main()
{
    srand(time(NULL));

    int n;
    const char rank[13]={'2','3','4','5','6','7','8','9','t','J','Q','K','A'};
    const char suit[4]={'c','h','d','s'};

    printf("Enter how many cards to serve : ");
    scanf("%d",&n);

    char cards[n][2];

    for(int i=0;i<n;i++){
        cards[i][0]=rank[rand()%12];
        cards[i][1]=suit[rand()%3];
    }

    printf("The served cards are : ");
    for(int i=0;i<n;i++){
        printf("%c%c   ",cards[i][0],cards[i][1]);
    }

    printf("\n");

    return  0;
}