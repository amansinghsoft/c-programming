#include <stdio.h>

int strlen(char str1[]);
void myStrCpy(char str1[], char str2[]);

int main()
{
    char str1[] = "aman singh";
    char str2[30];
    myStrCpy(str1, str2);
    printf("%s %s", str1, str2);
    return 0;
}
int strlen(char str1[])
{
    int i = 0, count;
    int c = str1[i];

    while (c != '\0')
    {
        c = str1[i];
        i++;
    }

    count = i - 1;
    return count;
}

void myStrCpy(char str1[], char str2[])
{
    for (int i = 0; i < strlen(str1); i++)
    {
        str2[i] = str1[i];
    }
    str2[strlen(str1)] = '\0';
}