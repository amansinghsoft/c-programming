#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int id;
    char name[15];
    float salary;
} Emp;

int main()
{
    Emp e1;
    Emp *ptr = &e1;

    ptr->id = 564; //(*ptr).id = 564 , e1.id = 564 are same
    strcpy(ptr->name, "aman");
    ptr->salary = 786.56;

    printf("%d  %s  %.2f\n", ptr->id, ptr->name, ptr->salary);
    return 0;
}