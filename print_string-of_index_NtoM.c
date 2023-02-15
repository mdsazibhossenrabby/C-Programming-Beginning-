#include <stdio.h>
#include <string.h>

int main()
{
    char words[1000];

    int n,m;

    printf("Enter your text without space ");
    scanf("%s",words);

    printf("Enter two integers corespondingly the length of the text : ");
    scanf("%d %d",&n,&m);

    char new[m+n-1];
    int j=0;

    for(int i=n;i<=m;i++,j++){

        new[j]=words[i];

    }

    new[j]='\0';

    printf("The new text according to the index range : ");
    puts(new);




    return 0;
}