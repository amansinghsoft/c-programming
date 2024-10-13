//Vector sum
// we can also use typedef in this program
#include <stdio.h>

struct Vector
{
    int i;
    int j;
};

struct Vector sumVector(struct Vector, struct Vector);

int main()
{
    struct Vector v1 = {3, 4};
    struct Vector v2 = {6, 9};
    struct Vector v3 = sumVector(v1, v2);
    printf("The value of vector is %di and %dj\n", v3.i, v3.j);

    return 0;
}

struct Vector sumVector(struct Vector v1, struct Vector v2)
{
    struct Vector v3 = {(v1.i + v2.i),(v1.j + v2.j)};

    return v3;
}