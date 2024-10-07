#include<stdio.h>
int sum(int, int);

int sum(int x, int y){
    
    printf("The sum is %d",x+y);
    return x+y;
}

int main(){
    int a=8 , b=7;
    sum(a,b);
}