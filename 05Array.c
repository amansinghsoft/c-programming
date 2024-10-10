 #include <stdio.h>

 int count(int arr[], int n){
    int possitive =0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
            {
                possitive++;
            }
    }
    
    return possitive;
 }

int main()
{

    int num[] = {1, 2, -3, -4, 5, -6, 7, 8, 9, 10};
    // int* ptr = num;

    printf("The number of positive array is %d",count(num, 10));
}
