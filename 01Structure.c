#include <stdio.h>
#include <string.h>

struct employ
{
    int id;
    char name[15];
    float salary;
};

int main()
{
    struct employ e1;
    e1.id = 420;
    strcpy(e1.name, "Aman");
    e1.salary = 30000;
    printf("%d  %s  %.2f", e1.id, e1.name, e1.salary);
    return 0;
}