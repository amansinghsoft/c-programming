#include<stdio.h>

int main(){
    int marks[] = {67 , 87 , 56 , 34 , 98};

    int* ptr = &marks[0];  // both &marks[0] and marks are same they will show address of 0 element.
    //int* ptr = marks;

    for (int i = 0; i < 5; i++)
    {
        printf("The marks at address %d is %d\n", i, marks[i]);
        printf("The marks at address %d by pointer is %d\n", i, *ptr);
        ptr++;
    }
    

}