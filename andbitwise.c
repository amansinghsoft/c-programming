#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter numbers for testing\n");
    scanf("%d %d",&a,&b);
    c=a&b;   //we use '&' for and operation.
    printf("the result of %d and %d is %d\n",a,b,c);
}