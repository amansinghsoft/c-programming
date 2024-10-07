// pow(a,2) always return double so  we have to use %f to print.
#include<stdio.h>
#include<math.h>

float sq(int);

int main(){

    int a=8;
    printf("The spuare of a is %.2f", sq(a));
}

float sq(int x){
    return pow(x, 2);
}