#include <stdio.h>

int main() {
    int i, j, rows, cols;
    int a[10][10], b[10][10], c[10][10];

    printf("Enter number of rows and columns of first matrix:\n");
    scanf("%d%d", &rows, &cols);

    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("first matrix\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("second matrix\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the Matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}



