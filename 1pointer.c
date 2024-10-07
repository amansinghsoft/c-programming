#include<stdio.h>

int main(){

    int i =7;
    int* j = &i;
    int** k = &j;

    printf("The value of i is %d\n",i); // Both i and *j will print same output.
    printf("The value of i is %d\n",*j);
    printf("The value of i is %p\n",*k);

    return 0;
}