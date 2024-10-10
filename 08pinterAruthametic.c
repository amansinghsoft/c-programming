#include<stdio.h>

int main(){
    int a = 7;
    int* ptr = &a;

    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);

    ptr++; // the pointer will increment by its values like integer or any other values.

    printf("The address of a is %u\n",ptr);

    return 0;
}