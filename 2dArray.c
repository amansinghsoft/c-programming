#include<stdio.h>


int main(){

    int arr[2][3];

    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the values of element at arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The values of element at arr[%d][%d] is %d: \n", i, j, arr[i][j]);
            
        }
        printf("\n");
    }
    
}