#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Lpatop";
    char target[20];

    strcpy(target, str);  // It will copy the content of first string in targeted string.
    printf("%s %s", str, target);

    return 0;
}