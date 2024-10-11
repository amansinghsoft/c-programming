#include <stdio.h>
#include <string.h>

int main()
{   
    char c = 'm';
    char str[] = "Bnbommfihfbgmmmfhufu";
    int count = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
        
    }
    printf("The total number of %c is %d", c, count);

    return 0;
}