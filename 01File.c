#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("aman.txt", "r");
    if (ptr == NULL)
    {
        printf("The file does not exist.");
    }
    else
    {

        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num id %d\n", num);

        fscanf(ptr, "%d", &num);
        printf("The value of num id %d", num);
        fclose(ptr);
    }
    return 0;
}