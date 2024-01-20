#include <stdio.h>
#include <math.h>

int main()
{
    float p,r,t,si;
	printf("enter th value of p,r,t:\n");
	scanf("%f%f%f",&p,&r,&t);
    si=(p*t*r)/100;
    printf("simple interest = %f", si);

    return 0;
}

