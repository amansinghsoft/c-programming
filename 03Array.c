#include<stdio.h>
  
int main(){

    int table[10];
    int num=0;

    printf("Enter the number which you want to print table :");
    scanf("%d",&num);

    for (int i = 0; i < 10; i++)
    {
        table[i] = num * (i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The table of %d * %d = %d\n",num, i+1, table[i]);
    }
    
    
return 0;
}