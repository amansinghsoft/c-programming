#include<stdio.h>

int factorial(int);

int main(){

    int a=3;
    printf("The factorial od %d and %d is :",a,factorial(a));
}

int factorial(int n){
    if (n == 1 || n == 0) // Base condition
    {
        return 1;
    }else
    {
        return factorial(n-1)*(n);
    }
    
    
}
