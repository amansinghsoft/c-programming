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
    struct employ e1, e2, e3;
    printf("Enter employ 1 id : ");
    scanf("%d", &e1.id);
    printf("Enter employ 1 name : ");
    scanf("%s", &e1.name);
    printf("Enter employ 1 selery : ");
    scanf("%f", &e1.salary);

    printf("Enter employ 2 id : ");
    scanf("%d", &e2.id);
    printf("Enter employ 2 name : ");
    scanf("%s", &e2.name);
    printf("Enter employ 2 selery : ");
    scanf("%f", &e2.salary);

    printf("Enter employ 3 id : ");
    scanf("%d", &e3.id);
    printf("Enter employ 3 name : ");
    scanf("%s", &e3.name);
    printf("Enter employ 3 selery : ");
    scanf("%f", &e3.salary);

    printf("\nThe detail of Employ 1 is \n%d  %s  %.2f\n", e1.id, e1.name, e1.salary);
    printf("\nThe detail of Employ 2 is \n%d  %s  %.2f\n", e2.id, e2.name, e2.salary);
    printf("\nThe detail of Employ 3 is \n%d  %s  %.2f\n", e3.id, e3.name, e3.salary);
    return 0;
}