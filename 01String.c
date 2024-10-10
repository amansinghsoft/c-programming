#include<stdio.h>
  
int main(){
    //char str[] = {'a', 'b', 'c', '\0'};   // both str[] = {} == str[] = ""
    char str[] = "abc";

    for (int i = 0; i < 3; i++)
    {
        printf("The string is %c.\n",str[i]);
    }
    
return 0;
}