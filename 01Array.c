#include <stdio.h>

int main()
{

    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* ptr = num;

    printf("The number at %u is %d", ptr+2, *(ptr+2));
}
