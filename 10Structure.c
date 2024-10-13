//complex number program
#include <stdio.h>

typedef struct com
{
    int real;
    int imaginary;
}complex;

int main()
{
    complex c = {3, 4};
    printf("The value of complex number is %d and i%d\n", c.real, c.imaginary);

    return 0;
}