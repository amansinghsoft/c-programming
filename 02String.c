#include<stdio.h>
  
int main(){
    char str[5];
    scanf("%s", str); // both &str and str are same
    printf("%s", str);
return 0;
}