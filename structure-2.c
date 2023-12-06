#include <stdio.h>
#include <string.h>

//Types1
struct info{
    int id;
    char name[100];
};

//Type 2
struct info1{
    int ID;
    char NAME[100];
} sazib,eva;

int main()
{
    struct info SAZIB,EVA; //For type 1

    SAZIB.id=231902005;
    EVA.id =231902005;

    //for type 2
    sazib.ID=231902005;
    eva.ID=231902003;

    //printf both
    printf("%d   %d\n",sazib.ID,SAZIB.id);
    printf("%d   %d\n",eva.ID,EVA.id);

    //for type 1

    strcpy(SAZIB.name,"MD. SAZIB");

    //for type 2

    strcpy(eva.NAME,"Eva Kazi");

    //Printf both

    printf("%s    %s\n",SAZIB.name,eva.NAME);



    return 0;
}
