#include <stdio.h>

int main() {

    int a = 3;
    int *aPtr = &a;
    printf("Adress of the pointer: %p\nValue of the pointer: %i\nValue of what the pointer is pointing to: %i\n", aPtr, *aPtr, a);
    
    return 0;
}

