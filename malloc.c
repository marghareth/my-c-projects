#include <stdio.h>
//dynamic memory allocation
//whenever we declare a variable, some memory from the stack is reserved and is given to us

int main() {
    //this memory is kept reserved until the variable falls out of scope
    // if (1) {
    //int scope = 5
    //}
    //inscope == 5;  error: 'inScope' undeclared
    //since inscope was declared inside the if block, it only exists inside the if block
    //and ceases to exist outside of it. If we wanted to keep inscope after the if block,
    //we have to declare it outside of the if block
    
    //In C, a variable defined in a function is stored in the stack memory.
    //assume that we want to create an array to store 5 integers. Since the size of int is 4 bytes, we need
    //5 * 4 bytes = 20 bytes of memory.
    //int *ptr = (int *) = typecasting
    //(int *)malloc(20);
    //int *ptr = (int *)malloc(sizeof(int) * 5);
    //checking if failed or pass
    //if (ptr == NULL) {
   // printf("Allocation failed.");
   //exit(0); }
   //calloc() similar to the malloc but this initializes the allocated memory to zero
   //this is used when you need memory with default zero values
   //syntax
   //calloc(n, size);
   //int *ptr = (int *)calloc(sizeof(int), 5);
   //the memory allocated using functions malloc() and calloc() is not de-allocated on their own.
   //the free function is used to release dynamically allocated memory backs to the operating system
   //syntax:
   //free(ptr);, where ptr is the pointer to the allocated memory.
   //after freeing a memory block, the pointer becomes invalid, and it is no longer pointing to a valid memory location
   int *ptr = (int *)calloc(sizeof(int), 5);
   //do some operations
   for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

        //free the memory after completing
        //operations
        free(ptr);
        ptr = NULL;
    //realloc()
    //function is used to resize a previously allocated memory block
    //it allows you to change the size of an existing memory allocation without
    //needing to free the old memory and allocate a new block
    //syntax:
    //realloc(ptr, new_size);
    int *ptr = (int*)malloc(5*sizeof(int));
    //resize the memory block to hold 10 integers
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed.");
        exit(0);
    }
    int *ptr = (int *)malloc(5 *sizeof(int));
    //reallocation
    int *temp = (int *)realloc(ptr, 10 *sizeof(int));
    //only update the pointer if reallocation is successful
    if (temp == NULL)
        printf("Memory reallocation failed.");
    else   
        ptr = temp;
    //example
    //consider the first scenario where we were having issues with the fixes size array.
    //initially allocate memory for 5 integers
    int *ptr = (int *)malloc(5*sizeof(int));
    //check if the allocation is successful
    if (ptr == NULL) {
        printf("Memory Allocation Failed");
        exit(0);
    }
    //now, we need to stire 8 elements so
    //reallocate to store 8 integers
    ptr = (int *)realloc(ptr, 8 * sizeof(int));
    //check if reallocation was successful
    if (ptr == NULL) {
        printf("Memory reallocation failed");
        exit(0);   
    }
    //assume we only use 5 elements now
    for (int i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 10;
    }
    //shrink the array back to 5 elements
    ptr = (int *)realloc(ptr, 5 * sizeof(int));
    //check if the shrinking was successful
    if (ptr == NULL) {
        printf("Memory reallocation failed");
        exit(0);
    }
    for (int i = 0; i < 5; i++)
    printf("%d ", ptr[i]);

    //finally, free the memory when done
    free(ptr);
    //memory leak occurs when a program allocates memory dynamically but fails to free the memory when it is no longer use
    //ex:
    //void f() { 
    //int * ptr = (int*)malloc(sizeof(int))
    //}
    //this results in a memory leak since the allocated memory is no longer accessible but remains occupied
    //common causes:
    //it is not freed up by calling free then it leads to memory leaks
    //how to dynamically allocate a 2d array in C
    
       return 0;
}
