#include <stdio.h>
#include <stdlib.h>
float calculateAverage(float** arr, int rows, int columns) {
    float sum = 0;
    int count;
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            sum += arr[i][j];
            count++;
        }
    }
    float average = sum / (float)count;
    return average;
}

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%i", &rows);
    printf("Enter the number of columns: ");
    scanf("%i", &columns);

    float** arr = (float**) malloc(sizeof(float*) * rows);
    for (int i = 0; i < rows; i++) {
        arr[i] = (float*) malloc(sizeof(float) * columns);
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            scanf("%f", &arr[i][j]);
        }
    }

    float ave= calculateAverage(arr, rows, columns);
    printf("Average: %.2f\n", ave);
    
    for(int i = 0; i < rows; i++) {
        free(arr[i]);
    
    free(arr);
    }
    return 0;
}