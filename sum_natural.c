#include<stdio.h>

int sum_natural(int);

int main(){
    int num=8;
    printf("The sum of %d natural number is %d",num,sum_natural(num));

    return 0;
}

int sum_natural(int n){
    if (n == 1)
    {
        return 1;
    }else
    {
       return sum_natural(n-1) + n;
    }
}