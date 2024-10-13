#include <stdio.h>

struct Vector
{
    int i;
    int j;
};

int main()
{
    struct Vector v = {3, 4};
    printf("The value of vector is %di and %dj\n", v.i, v.j);

    return 0;
}