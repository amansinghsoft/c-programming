#include<stdio.h>

int remain(int*);

int main(){
    int a = 5;
    printf("The value of a is %d\n",a);
    printf("The address of a is %p\n",&a);
    printf("The address of a is %u\n",&a);
    remain(&a);
    return 0;
}

int remain(int *ptr){
    printf("the value of ptr is %p\n",ptr);
    printf("the value at ptr is %d\n",*ptr);

    return 0;
}