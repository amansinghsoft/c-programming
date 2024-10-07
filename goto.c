#include<stdio.h>

int main(){
    int num;
    printf("Hello\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 5; j++)
        {
            printf("Enter num : ");
            scanf("%d",&num);
            if (num == 0)
            {
                goto end;
            }
            
        }
        
    } 
    end :
    return 0;
}
