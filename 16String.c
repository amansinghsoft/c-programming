#include <stdio.h>
#include <string.h>

int main()
{   
    char c = 'z';
    char str[] = "Bnbommfihfbgmmmfhufu";
    int contains = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1;
            break;
        }
        
    }
    if (contains == 1)
    {
        printf("Yes! it contains.");
    }else
    {
        printf("It does not contains.");
    }
    
    return 0;
}