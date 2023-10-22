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

    if(n>52){
        printf("You can't serve more than 52 cards . \n");
        return 1;
    }

    char cards[n][2];
    int served[52]={0};

    for(int i=0;i<n;i++){
        int randCard;
        do{
                randCard=rand()%52;  //to ensure qunique cards
        }while(served[randCard]);

        served[randCard]=1;
        cards[i][0]=rank[randCard%13];
        cards[i][1]=suit[randCard/13];
    }

    printf("The served cards are : ");
    for(int i=0;i<n;i++){
        printf("%c%c   ",cards[i][0],cards[i][1]);
    }

    printf("\n");

    return  0;
}