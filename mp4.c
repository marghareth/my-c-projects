#include <stdio.h>

void inputMatrix(int rows, int columns, int array[rows][columns]) {
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Element at [%i][%i]: ", i, j); 
            scanf("%i", &array[i][j]);
        }
    }
}

void transformMatrix(int rows, int columns, int array[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            array[i][j] *= 2;  
        }
    }
}

void printMatrix(int rows, int columns, int array[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%i ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, columns;
    printf("Enter the number of rows: \n");
    scanf("%i", &rows);
    printf("Enter the number of columns: \n");
    scanf("%i", &columns);
    
    if (rows <=0 || columns <= 0)
    printf("Invalid input");
    else {

    int array[rows][columns];

    inputMatrix(rows, columns, array);
    printf("Original Matrix:\n");
    printMatrix(rows, columns, array);
    transformMatrix(rows, columns, array);
    printf("Transformed Matrix:\n");
    printMatrix(rows, columns, array);
    
    }

    return 0;
}
