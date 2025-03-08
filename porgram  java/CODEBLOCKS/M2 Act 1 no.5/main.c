//Problem 5

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    float result;

    printf("input x=100 \n");
    printf("input y=3\n");

    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y );
    result=(float)x/y;

    printf("answer:%d/%d=%2f",x,y,result);
    return 0;
}
