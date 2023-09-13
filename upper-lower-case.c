#include<stdio.h>
#include <ctype.h>

int main()
{
    printf("Enter Word : ");
    char word[100];

    scanf("%s",word);

    for(int i=0;word[i]!='\0';i++){
        if(word[i]=='A'|| word[i]=='B' || word[i]=='S' || word[i]=='I'|| word[i]=='Z'){
            word[i]=tolower(word[i]);
        }else if(word[i]=='a'|| word[i]=='b' || word[i]=='s' || word[i]=='i'|| word[i]=='z'){
            word[i]=toupper(word[i]);
        }
    }

    printf("The modified word is : %s \n",word);

    

    return 0;
}