#include<stdio.h>
#include<string.h>

struct aman
{
    int code;

    float num;
    char name[10];
};


int main()
{
    struct aman am;
    am.code=1234;
    am.num=98.76678;
    strcpy(am.name,"amansingh");
    printf("%d\n",am.code);
    printf("%.2f\n",am.num);
    printf("%s",am.name);
}
