#include<stdio.h>

void swap(int*, int*);

int main(){
    int a , b;
    a = 8;
    b = 5;
    swap(&a, &b);
    printf("The value of a and b is %d and %d.",a,b);
}

void swap( int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}