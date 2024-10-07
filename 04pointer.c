// WAP to print address of a veriable 

#include <stdio.h>

int main(){
    int i=8;
    int* ptr = &i;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %u\n",&i);

    printf("The value of i is %d\n",*ptr);
}