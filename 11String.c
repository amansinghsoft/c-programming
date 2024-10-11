#include <stdio.h>

char *slice(char str[], int m, int n);

int main()
{
    char str[] = "Aman hufhehvhr";

    printf("%s", slice(str, 1, 7));
    return 0;
}

char *slice(char str[], int m, int n)
{
    int i = 0;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';

    return str;
}