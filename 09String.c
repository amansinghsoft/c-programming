#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "lpatop";  // it works on ASSCI value
    char str1[] = "ofHP";

    int a = strcmp(str, str1);  // It compare the str and str1. If first element of str comes first in 
                                // alphabates so it return negative value but if  first element of str1 comes  
    printf("%d", a);            // first in alphabates so it return positive number.
    

    return 0;
}