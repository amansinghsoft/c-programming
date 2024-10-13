#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("aman.txt", "w");

    if (fptr == NULL) { // Check if the file opened successfully
        printf("Error opening the file.\n");
        return 1; // Return a non-zero value to indicate an error
    }

    int num = 4;
    
    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}