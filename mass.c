#include<stdio.h>

float force(float);

int main(){
    float m=57;
    printf("the force is : %.2f",force(m));

    return 0;
}

float force(float x){
    return (x * 9.8);
}