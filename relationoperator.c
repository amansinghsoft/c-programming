#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter numbers for testing\n");
    scanf("%d%d",&a,&b);
    c = a>b;
    printf("The output of %d and %d is %d\t",a,b,c);
    c=a==b;
    printf("The output of %d and %d is %d\t",a,b,c);
    c=a!=b;
    printf("The output of %d and %d is %d\t",a,b,c);
}