#include<stdio.h>

int* sum(int, int);
int* average(int, int);

int main(){
    int a, b;
    a = 8;
    b = 6;

    int* ptr1;
    int* ptr2;

    ptr1 = sum(a,b);
    ptr2 = average(a,b);

    printf("The address of sum is %d and averatge is %d\n",ptr1,ptr2);
    return 0;
}

int* sum(int a, int b){
    int s = a+b;
    int* ptr = &s;
    printf("The sum of a and b is %d\n",s);
    return ptr;
}

int* average(int a, int b){
    int avg = ( a + b ) / 2;
    int* ptr = &avg;
    printf("The average of a and b is %d\n",avg);
    return ptr;

}
