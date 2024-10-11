#include <stdio.h>

struct employee
{
    int id;
    char name[15];
    float salary;
};

int main()
{
    struct employee e1;
    e1.id = 56;
    struct employee *ptr;

    ptr = &e1;

    printf("%d", (*ptr).id);  // Both (*ptr).id and ptr -> id are same.
    printf("%d", ptr->id);
    return 0;
}