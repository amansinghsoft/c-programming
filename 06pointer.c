#include<stdio.h>

void change(int*);

int main(){

    int b=6;
    printf("The value of b is %d\n",b);
        change(&b);
    printf("The value of b is %d\n",b);
}

void change(int* a){
    *a= *a *7;
}