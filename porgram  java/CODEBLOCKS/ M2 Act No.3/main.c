#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;
    float flt;
    char f;

    printf("character int \n");
    scanf("%d",&no);
    printf("Entered Character is %d\n",no);

    printf("Character float \n",flt);
    scanf("%f",&flt);
    printf("Entered Character is %c\n");

    printf("Character char \n");
    scanf("%c",&f);
    printf("Entered Character is %c \n",f);
    return 0;
}
