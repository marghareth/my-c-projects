#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

//defining the structure and variable at the same time
struct date {
    int month;
    int day;
    int year;
} today; //today is declared at the same time that the structure is defined
//today now is a variable of type data

//arrays of structures
struct month {
    int numberOfDays;
    char name[3];
};

//nested structures
struct time {
    int hours;
    int minutes;
    int seconds;
};

struct dateAndTIme {
    struct date sdate;
    struct time stime;
};
//this is inside the main: struct dateAndTime even; then for accessing then event.sdate
/* struct Time {
struct Date {
int day}}
*/

//structures and pointers
struct date {
    //code that should be implemented
};
/* int main
struct date *datePtr
datePtr = &todaysDate;
datePtr -> day = 21;
*/
//structures containing pointers
struct intPtrs{
    int *p1;
    int *p2;
};
/* int main:
struct intPtrs pointers;
int i1 = 100;
*/
struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};
double sum(struct funds moolah) {
    return(moolah.bankfund + moolah.savefund);
}
/* int main{
struct funds stan = {
"garlic-melon bank", 4032.27, "Lucky's savings and loan", 8543.94};
printf("Stna has a total of akdakda")}
return 0;
*/
//challenge 1
void squareInt(int *n) {
    *n = *n * *n;
}
int main() {
    //pointers and structures
    //pass by reference - copies the adress of the argument into the formal parameter
    //const pointer parameter - indicates that the function will treat the argument that is passed for this parameter as a constant
    //you apply the const keyword to a parameter that is a pointer to specify that a function
int n;
printf("Enter a num: ");
scanf("%i", &n);
squareInt(&n);
printf("Output of the n^squared: %i\n", n);

//dynamic memory allocation
int a;
int *p;
p = (int*)malloc(sizeof(int));
*p = 10;
free(p);

char *str;
str = (char*)malloc(15 * sizeof(int));
strcpy(str, "jason");
printf("String = %s, Address = %p\n", str, str);

//reallocating memory
str = (char*)realloc(str, 25 * sizeof(int));
strcat(str, ".com");
printf("String = %s, Address = %p\n", str, str);

free(str);

//challenge 2
int n;
printf("Enter the num of string: ");
scanf("%i", &n);
char *name = (char*)malloc((n+1) * sizeof(char));
get(name);

printf("Enter the name: ");
fgets(name, n, stdin);
printf("This is the output: ");
free(name);


return 0;

}