// complex number program
#include <stdio.h>

typedef struct com
{
    int real;
    int imaginary;
} complex;

void display(complex c)
{
    printf("The value of complex number is %d and %di\n", c.real, c.imaginary);
}

int main()
{
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter real number :\n");
        scanf("%d", &carr[i].real);
        printf("Enter imaginary number :\n");
        scanf("%d", &carr[i].imaginary);
        display(carr[i]);
    }

    return 0;
}