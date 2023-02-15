#include <stdio.h>
#include <string.h>

int main()
{
    char text[1000];

    int count=0;


    printf("Enter your text : ");
    fgets(text,1000,stdin);

    for(int i=0;text[i] !='\0';i++){

        if(text[i]=='a' || text[i]=='A' || text[i]=='e' || text[i]=='E' || text[i]=='i' || text[i]=='I' || text[i]=='o' || text[i]=='O' || text[i]=='u' || text[i]=='U'){
            count++;
        }


    }

    printf("The totall number of vowels in the text is : %d\n\n",count);
    



    return 0;
}