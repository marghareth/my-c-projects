//a c-string is the convention to have a one-dimensional array of characters which is terminated by a null-character  
//this means that a c-string with a content of "abc" will have four characters a,b,c and '\0'
#include <stdio.h>
#include <string.h>

int main(void)
{
    int toknum = 0;
    char src[] = "Hello, world!";
    const char delimeters[] = ", !";
    char *token = strtok(src, delimeters);
    while(token != NULL)
    {
        printf("%d: [%s]\n", ++toknum, token);
        token = strtok(NULL, delimeters);
    }

}
//string literals represent null-terminated, static duration arrays of char.
char * string = "hello world";
//when initiliazing a char * to a string constant as above, the string itself is usually allocated in read-only data; string is a pointer
// to the first element of the array, which is the character 'h'
//pointer assignments do not copy strings
int main(void) //means there's no return
    int a = 10, b;
    char c[] = "abc", *d;
    b = a;
    a = 20;
    printf("%d %d\n", a, b); //"20 10" will be printed */
    d = c;
    ///* only copies the address of the string
    //there is still only one string stored in memory
    c[1] = 'x';
    printf("%s %s\n", c, d); //"axc axc" will be printed
//creating arrays of strings
 //an array whose elements are char *s
 //an array whose elements are arrays of charss
 char * string_array[] = {
    "foo",
    "bar",
    "baz",
 }
 //a compount literal is an unnamed object which is created in the scope where is defined
 //the genera; syntax for declaring a one-dimensional array is
 //type arrName[size];
 //declaring an array
 int array[10];
 //to ensure it holds zero values while declaring, you can do this:
 int array[0] = {0};
 //declaring an array of zero length is not allowed
 //with 3 dimensions and indexes i,j,k
 int array[10 *10 *10];
 size i, j, k;
//array length
int array[] = {0,1,2,3,4,5,6,7,8,9};
//number of elements in array
int size = sizeof(array) / sizeof(array[0]);

//passing multidimensional arras to a function
//c arrays
//to insert values to it, use a comma-separated list inside curly braces, and make sure all values
//are of the same data type
int myNumbers[] = {25, 50, 75, 100};
//loop through an array
int myNumbers[] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++) {
    printf("%d\n", myNumbers[i]);
}
//set array size
//another common way to create arrays, is to specify the size of the array, and add elements later
//sizeof(array)/sizeof(array[0]);
//avoid mixing data types
//all elements in an array must be of the same data type
//c array size
//to get the size of an array, you can use the sizeof operator
//sizeof(myNumbers), but the output will give the size of a type in bytes
//memory size of an array
int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
float avg, sum = 0;
int length = sizeof(ages)/ sizeof(ages[0]);

for (int i = 0; i < length; i++) {
    sum += ages[i];
}

avg = sum / length;
int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
int i = 0, lowest = ages[0];

for (i = 0; i < length; i++) {
    if (lowestAge > ages[i]) {
        lowest = ages[i]
    }
}
//C Multidimensional arrays
//a 2d array is also known as a matrix
//to create a 2d array of integers:
int matrix[2][3] = {{1,4,2}, {3,6,8}};
//the first dimension represents the number of rows, while the second dimension represents the number of columns
//access to the elements
printf("%d", matrix[0][2]);
//loop through a 2d Array
int i, j;
for(i=0; i<2; i++) {
    for(j = 0; j < 3; j++) {
        printf("%d\n", matrix[i][j]);
    }
}
//when a variable is created in C, a memory address is assigned to the variable
//the memory address is the location of where the variable is stored on the computer
//to access it, use the reference operator (&), and the result represents where the variable is stored
//Pointers
//example:
int myAge = 43;

printf("%d", myAge); //outputs the value of myAge(43)
printf("%p", &myAge); //outputs the memory address of myAge(0x7ffe)
//a pointer is a variable that stores the memory address of another variable as its value
//a pointer variable points to a data type (like int) of the same type ,and is created wth the *operator
int* ptr = &myAge;
printf("%p\n", ptr); //outut the memory adress of myAge
//you can also get the value of the variable the pointer points to, by using the deference operator
printf("%d\n", *ptr);
//c pointers and arrays
//use pointers to access arrays
int myNumbers[4] = {25, 50, 75, 100};
//relationship between arrays and pointers
//the name of an array is actually a pointer to the first element of the array
//the memory address of the first element is the same as the name of the array:
printf("%d", *myNumbers); //get the value of the first element in myNumbers
//to access the rest of the elements in myNumbers, you can increment the pointer/array (+1, +2, etc)
printf("%d", (*myNumbers + 1)); //get the value of the second element in myNumebrs
//or loop
*myNumbers = 13; //change the value of the first element to 13
*(myNumbers +1) = 17; //change the value of the second element to 17
//recursion
int sum(int k);

int main() {
    int result = sum(10);
    printf("%d", result);
    return 0;
}

int sum(int k) {
    if (k > 0 ) {
        return k + sum(k-1);
    } else {
        return 0;
    }
}
//when the sum() function is called, it adds parameter k to the sum of all numbers smaller than k and returns the result
//when k becomes 0, the function just returns 0
//more examples
int factorial(int n) {
    if (n == 0) 
        return 0; //base case
    else
        return n * factorial(n-1); //recursive case
}

//sum of natural numbers
int sum(int n) {
    if (n == 0) 
        return 0;
    else
        return n + sum(n-1);
}

//fibonnaci sequence
int fibonnaci(n) {
    if (n == 0)
        return 0;
    if (n == 1) 
        return 1;
    else 
        return (fibonnaci(n-1) + fibonacci(n-2));
}
