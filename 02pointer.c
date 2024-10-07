// Call By Referance
#include<stdio.h>

int sum(int* , int*);

int main(){
    int x , y;
    x = 8;
    y = 6;

    printf("The sum of %d and %d is %d\n",x,y,sum(&x, &y));
    printf("The value of x is %d",x);
}

int sum(int* a , int* b){
    *a= 4;
    return *a + *b;
}