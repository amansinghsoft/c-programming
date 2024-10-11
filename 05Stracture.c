#include<stdio.h>
#include<string.h>

struct employee
{
    int id;
    char name[15];
    float salary;
};
void show(struct employee e1);

int main(){
    struct employee e1;
    e1.id = 564;
    strcpy(e1.name , "aman");
    e1.salary = 786.56;
    show(e1);
return 0;
}

void show(struct employee e1){
    printf("The id is %d\n",e1.id);
    printf("The name is %s\n",e1.name);
    printf("The salary is %.2f\n",e1.salary);
}