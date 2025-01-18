#include <stdio.h>

int main() {
    int rows, i, j;

    // Number of rows in the triangle
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the triangle pattern
    for(i = 1; i <= rows; i++) {
        // Loop to print spaces
        for(j = i; j < rows; j++) {
            printf(" ");
        }
        // Loop to print asterisks
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
