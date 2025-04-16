#include <stdio.h>

int main() {
    int x = 7;
    float y = 20.89;
    char character = 'j';

    //using & operator
    printf("Using & operator\n");
    printf("Adress of x: %p\n", &x);
    printf("Adress of y: %p\n", &y);
    printf("Adress of character: %p\n", &character);

    //using & and *operator
    printf("Using & and *operator\n");
    int *aPtr = &x;
    float *bPtr = &y;
    char *cPtr = &character;
    
    //for evidence, to see that the pointer assigned the right value of the variable pointed to
    printf("Value of x: %i\n", *aPtr);
    printf("Value of y: %f\n", *bPtr);
    printf("Value of the character: %c\n", *cPtr);

    //using only the pointer variable
    printf("Using only the pointer variable\n");
    printf("Adress of x: %p\n", aPtr);
    printf("Adress of y: %p\n", bPtr);
    printf("Adress of the character: %p\n", cPtr);

    //using only pointer deferencing operator
    printf("Using only pointer deferencing operator\n");
    printf("Value of x: %i\n", *aPtr);
    printf("Value of y: %f\n", *bPtr);
    printf("Value of the character: %c\n", *cPtr);

    return 0;
}