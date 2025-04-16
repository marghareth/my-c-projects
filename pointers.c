#include <stdio.h>
//pointers = data types that hold memory addresses.
//the format specifier for pointers and prints out memory addresses
void plusOne(int* x) {
    *x = *x + 1;
}


int main () {
    //we declare a pointer with an * after the type like so
    int* xPtr;
    int* yPtr = 0;


    printf("%p", yPtr); //prints out 0
    //0 is the null pointer value. This means the pointer points to nothing.
    //it is good idea to initialize pointers to the null value
    //when declaring multiple pointers on one line, you have to include the * everytime like so: 
    int *aPtr, *bPtr, *cPtr;

    //just by convention, it was often added with Ptr to the end so we can identify that it is a pointer at a glance
    //diff types and even structures can have pointers
    char* content;
    //Card* cardPtr;

    //pointers do not hold the value of the variable we are pointing to
    int x = 100;
    int* xPtr = &x;

    x == xPtr; //false
    //we can get the value of the memory address pointed at by the pointer by using the indirection operator *
    //deferencing
    x == *xPtr; //true
    //plusone function
    int a = 0;
    plusOne(&a);
    a == 1; //true

    //to store the address of a variable in a pointer, the addresss of (&) operator is used
    int num = 10;
    int *ptr = &num; //ptr now holds the memory address of num

    //deferencing
    //the * operator is used to access the value stored at the memory address
    printf("%d", *ptr);

    int num = 10;
    int *ptr = &num;  // Pointer storing address of num

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Pointer stores address: %p\n", ptr);
    printf("Value at address stored in pointer: %d\n", *ptr);

    //Value of num: 10
    //Address of num: 0x7ffcd4c4b660
    //Pointer stores address: 0x7ffcd4c4b660
    //Value at address stored in pointer: 10

    return 0;
}