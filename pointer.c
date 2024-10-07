#include<stdio.h>

int main(){
    int num = 8;
    int* j = &num;
    printf("The addess of %d is %p\n",num,&num); //both %p and %u are same 
    printf("The addess of %d is %u\n",num,j);

    printf("The valve at address j is %d \n",*j); // both *j and *(&num) are same
    printf("The valve at address j is %d \n",*(&num));
    return 0;
}