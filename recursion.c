//recursion
//n! = n* (n-1) ! where when n is 0, it is 1
int factorial (int n) {
    if(n == 0) {
        return 1;
    }
    return n * factorial (n-1);
} //this is what we call a recursive function, since the function calls upon itself.
//there is an alternative of doing this but the recursive function looks cleaner and cleverer looking compared to iterative version.
//a recursive function contains a base case, which is the simplest case. //
//in the example, the base case is when n is 0, whose answer we know to be 1
//recursion is a process where a function calls itself directly or indirectly in order to solve a problem
//breaking a problem down into smaller
//here's how recursion works:
//base case: a simple non-recusrive condition that stops the recursion. If there's no base case, the recursion will continue infinitely
//recursive case: the part of the function where it calls itself to solve smaller parts of the problem
int factorial(int n) {
    if (n == 0) 
    return 1;
    else
    return n * factorial(n-1);
}
//basic structure of recursion
function_name(parameters) {
    if(base_case_condition) {
        return base_case_result;
    } else {
        return recursive_case_result;
    }
}
//examples:
n! = n*(n-1) * (n-2) * ... * 1
base case: 0! = 1
//this is how it works:
factorial (5) = 5 * factorial(4)
factorial (4) = 4 * factorial(3)
factorial (3) = 3 * factprial(2)
factorial (2) = 2 * factorial(1)
factorial (1) = 1 * factorial(0)
factorial (0) = 1 (base case reached)

//sum of natural numbers
sum(n) = n + (n-1) + (n-2) + .. + 1
base case: sum(0) = 0;

int sum(int n) {
    if(n == 0) //base case
    return 0;
    else return n + sum(n-1);
}
//fibonacci sequence
//it is a series of numbers where each number is the sum of the two preceding ones, starting from 0 and 1
fibonacci(n) = fibonacci(n-1) + fibonacci(n-2) 
base cases: fibonacci(0) = 0, fibonacci(1) = 1

int fibonacci(int n) {
    if (n == 0) 
    return 0;
    if (n == 1) 
    return 1;
    else
    return fibonacci(n-1) + fibonacci(n-2);
}
