#include <stdio.h>

int main() {
    int x = 7;
    float y = 20.89;
    char character = 'j';

    //using & operator
    printf("Adress of x: %p\n", &x);
    printf("Adress of y: %p\n", &y);
    printf("Adress of character: %p\n", &character);

    //using & and *operator
    int *aPtr = &x;
    int *bPtr = &y;
    char *cPtr = &character;

    printf("Value of x: %i\n", *aPtr);
    printf("Value of y: %f\n", *bPtr);
    printf("Value of the character: %c\n", *cPtr);

    //using only the pointer variable
    printf("Value of x: %p\n", aPtr);
    printf("Value of y: %p\n", bPtr);
    printf("Value of the character: %p\n", cPtr);

    //using only pointer deferencing operator
    printf("Value of x: %i\n", *aPtr);
    printf("Value of y: %f\n", *bPtr);
    printf("Value of the character: %c\n", *cPtr);

    return 0;
}