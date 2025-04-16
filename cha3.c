#include <stdio.h>

void squareNum(int *n) {
    *n = (*n) * (*n);
}
int main() {
    int n;

    printf("Enter a num: ");
    scanf("%i", &n);
    squareNum(&n);
    
    printf("Result: %i", n);
    return 0;
}