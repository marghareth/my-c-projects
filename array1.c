#include <stdio.h>
int main() {
    int arr[8][8];
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            arr[i][j] = 1;
        }
    }
    
    int location, x, y;

    printf("Enter the number of locations: ");
    scanf("%i", &location);
    
    printf("Enter the locations: ");
    for (int i = 0; i < location; i++) {
    scanf("%i %i", &x, &y);
    }
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == x && j == y) {
                arr[i][j] = 0;
            }
        } 
    }
    
    for(int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%i ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}