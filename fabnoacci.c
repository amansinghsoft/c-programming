#include<stdio.h>

int fabnoacci(int);

int main(){
    int num=1;
    printf("The fabnoacci series of %d is %d.",num,fabnoacci(num));
}

int fabnoacci(int n){
    if (n == 1 || n == 2)
    {
        return n-1;
    }else
    {
        return fabnoacci(n-1) + fabnoacci(n-2);
    }
    
    
}