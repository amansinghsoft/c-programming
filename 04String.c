#include<stdio.h>
  
int main(){
    char str[10];

        for (int i = 0; i < 5; i++)
        {
            scanf("%c", &str[i]);
            fflush(stdin);  // Use to not take enter as input.
        }

        printf("%s", str);
        
return 0;
}