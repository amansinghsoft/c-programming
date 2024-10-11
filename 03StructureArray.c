#include <stdio.h>

struct empolye
{
    int id;
    char name[15];
    float selary;
};

int main()
{
    struct empolye arr[5];
    printf("Enter employ id number : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i].id);
    }
    printf("Enter employ name : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", &arr[i].name);
    }

    printf("Enter employ selary : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &arr[i].selary);
    }

    printf("Employ information is : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d  %s  %.2f\n", arr[i].id, arr[i].name, arr[i].selary);
    }
    return 0;
}