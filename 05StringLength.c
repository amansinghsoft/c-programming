#include <stdio.h>

int strlen(char str[]);

int main()
{
    char str[] = "Aman hufhehvhr";

    printf("%d", strlen(str));
    return 0;
}

int strlen(char str[])
{
    int i = 0, count;
    int c = str[i];

    while (c != '\0')
    {
        c = str[i];
        i++;
    }

    count = i - 1;
    return count;
}