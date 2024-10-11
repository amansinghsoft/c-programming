#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Lpatop";
    char str1[] = " of HP";

    strcat(str, str1);  // It will add the content of str1 string in str string.
    printf("%s", str);

    return 0;
}