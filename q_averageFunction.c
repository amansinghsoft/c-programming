#include<stdio.h>

float average(float,float,float);

int main(){
    float a=0, b=0, c=0;
    printf("Enter three numbers :");
    scanf("%f%f%f",&a,&b,&c);
    printf("Average of %.2f, %.2f, %.2f is  %.2f",a,b,c,average(a,b,c));
}

float average(float x,float y,float z){
    float total=x+y+z;
    return total/3;
}