#include <stdio.h>
//if the main function looks like  this main (void), meaning there's no return value
//functions are used to modularize programs.
//functions are invoked by a function call which specifies the function name and provides information (as arguments)
//that the function needs to perform its designed task.
//functions are normally used in a program by wriitng the name of the function followed by a left parenthesis followed by the argument

int square (int y); //function prototype
int maximum (int x, int y, int z);
int factorials(int num);
int fibonacci(int a);

int main () {

    //ex: calculate and print the square root of 900.0
    printf("%i", 900^1/2);

    //error prevention: include the math header by using the preprocessor directive #include <math.h> when using functions in the math library
    //examples of functions inside the math library
    //sqrt(x) = square root
    //cbrt(x) = cube root
    //exp(x) = exponential function
    //log(x) = natural lograrithm of x
    //log10(x) = natural lograrithm of x (base 10)
    //fabs(x) = absolute value of x as a floating point number
    //ceil(x) = rounds x to the smallest integer not less than x
    //floor(x) = rounds x to the largest integer not greater than x
    //pow(x,y) = x raised to power y(x^y)
    //square function
    for (int x =1; x <= 10; ++x) {
        printf("%d ", square(x)); //function call
    }

    //maximum function = finding the largest number
    int number1;
    int number2;
    int number3;

    printf("Enter three integers:  ");
    scanf("%d%d%d", &number1, &number2, &number3);

    printf("Maximum is: %d\n", maximum(number1, number2, number3));

    int square(int y) //y is a copy of the argument to the function
    {
        return y*y; // returns the square of y as an int
    }

    int maximum(int x, int y, int z) {
        int max = x;

        if(y > max) {
            max = y;
        }

        if(z > max) {
            max = z;
        }
        reurn max;
    }

    int factorials(int num) {
        if (num <= 1) {
            return 1;
        } else {
            return (number * factorial(num-1));
        }
    }
    
    int fibonacci(int a) {
        if(n == 0 || n == 1 ) {
            return n;
        } else {
            return fibonacci(n-1) + fibonacci(n-2);
        }
    } 


    return 0;
}
//include function prototypes for all functions to take advantage of C's type-checking capabilities.
//argument values that doesnt correspond precisely to the parameter types in the function prototype are converted
//to the proper type before the function is called
// data type : long double "%Lf"
//double: "%lf", for the printf("%f"), float: %f
//unsigned long long int %llu, long long int: %lld
//unsigned long int: %ld, unsigned int: %u
//int: %d, unsigned short: %hu, short: %hd
//char: %c
//if our square function that uses an int parameter is called with a floating point argument, the argument is converted to int and square usually returns an incorrect value
//if there's no function prototype for a function, the compiler forms its own function prototype using the first occurence of the function
//either the function definition or a call to the function
//this typically leads to warnings or errors, depending on the compiler
//recursion has many negatives. it repeatedly invokes the mechanism, and consequently the overhead, of function calls
//this can be expensive in both processor time and memory space. Each recursive call causes another copy of the function
//to be created