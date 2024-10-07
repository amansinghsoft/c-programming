#include<stdio.h>

float c2f(float);

int main(){
    float temp;
    printf("Enter temprature in celcious :");
    scanf("%f",&temp);
    printf("The temprature in forahenhite is %.2f",c2f(temp));
}

float c2f(float f){
    return (f * 9/5) + 32;
}