#include <stdio.h>

struct employee
{
    int id;
    char name[15];
    float salary;
};

int main()
{
    struct employee arr[5];
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

    printf("Enter employ salary : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &arr[i].salary);
    }

    printf("Emploies information are : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d  %s  %.2f\n", arr[i].id, arr[i].name, arr[i].salary);
    }
    return 0;
}