#include<stdio.h>
  
int main(){
    char str[] = "Aman";

    printf("%s\t",str);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",str[i]);
    }
    
return 0;
}