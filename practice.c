#include<stdio.h>
void main()
{
    int feb;
    printf("enter dayes in feb:");
    scanf("%d",&feb);
    if(feb==28)
    {
        printf("normal year");
    }
    else if (feb==29)
    {
        printf("leap year");
    }
    else
    {
        printf("invalid input");
    }
}