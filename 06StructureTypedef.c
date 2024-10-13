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

    // typedef struct employee Emp;  both Typedef are same.
    Emp e1;
    Emp* ptr = &e1;

    e1.id = 564;
    strcpy(e1.name, "aman");
    e1.salary = 786.56;

    printf("%d  %s  %.2f\n", e1.id, e1.name, e1.salary);
    printf("%d  %s  %.2f\n", ptr -> id, ptr -> name, ptr -> salary);

    return 0;
}