#include <stdio.h>
//student information system
struct Student {
    int id;
    char name[50]; //array
    char course[50]; //array
    int year;
};
//employee payroll system
struct Employee {
    char name[50];
    float rate;
    int hours;
    float salary;
};
//library book record
struct Book {
    char title[50];
    char author[50];
    int year;
};
//simple grading system
struct Student1 {
    char name[50];
    float grades[3];
    float average;
};
//inventory system
struct Product {
    char name[50];
    float price;
    int quantity;
};
//vowel counter
int vowelCounter(char a[]) {
    int count;
    for(int i = 0; a[i] != '\0'; i++) {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
            count++;
        }
    }
    return count;
}
void numOperator() {
        int n, i;
        printf("Enter size:");
        scanf("%i", &n);

        int num[n];

        for(int i = 0; i < n; i++) {
            printf("Enter the num: ");
            scanf("%i", &num[i]);
        
    for(int i = 0; i < n; i++) {
        if (num[i] % 2 == 0) {
            printf("%i", num[i]);
        } else {
            printf("%ii", num[i]);
        }
    }
    }
}
//student grade calculator
struct Student2 {
    char name[50];
    float quiz, exam, finalGrade;
};
//array reverse
void arrayReversal(int arr[], int rev[], int n) {
    int temp = 0;
    for (int i = 0, n = temp; i < temp; i++, n--) {
        int rev[i] = arr[n];
    }
}
//reverse number without loop
void reverseNumber(int num) {
    if (num == 0) {
        return;
    }
    printf("%d", num % 10);
    reverseNumber(num / 10);
}
//sum of two numbers
void addNumbers(int a, int b) {
    printf("Sum: %i", a + b);
}
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("even");
    } else {
        printf("odd");
    }
}
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
//greatest common divisor
int getGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
//factorial with recursion
int factorial (int n) {
    if (n == 0 || n == 1) {
        return 1;
    } 
    return n * factorial(n-1);
}
int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    
    return fibonnacci(n-1) + fibonacci(n-2);
} 
//pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
//simple calculator
void add(int *a, int *b, int *result) {
    *result = *a + *b;
}
void subtract(int *a, int *b, int *c) {
    *c = *a - *b;
}
//student management system
#define MAX_SCORES 5
#define MAX_STUDENTS 100 //define a maximum number of students

struct Student3 {
    char name[50];
    int id;
    int scores[MAX_SCORES];
    float average;
};

//function to accept student details (pass by reference)
void inputStudent(struct Student3 *s) {
    printf("Enter student name: ");
    scanf(" %[^\n]", (*s).name); //it reads the full name
    printf("Enter student: ");
    scanf("%i", &(*s).id);

    printf("Enter scores: %d", MAX_SCORES);
    for(int i = 0; i < MAX_SCORES; i++) {
        scanf("%d", &(*s).scores[i]);
    }
}
//function to calculae average scores pass by value
float computeAverage(int scores[], int n) {
    int sum = 0; 
    for(int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return (float)sum/n;
}
//function to sort students by average score (pointer manipulation)
void sortStudents(struct Student3 *students, int n) {
    struct Student3 temp;
    for (int i = 0; i < n -1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(students + j).average < *(students + j + 1).average) {
                //
            }
        }
    }
};
//nested machine problems
//nested arrays in structures
struct Student4 {
    char name[50];
    int score;
};
//define structure for classroom containing an array of Students
struct Classroom {
    int roomNumber;
    struct Student4 students[5]; //array of 5 students
};
//function to input classroom details
void inputClassrooms(struct Classroom classrooms[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Enter details: ");
        printf("Enter room number: ");
        scanf("%d", &classrooms[i].roomNumber);

        //input student details
        for (int j = 0; j < 5; j++) {
            printf("Enter name of student %d: ", i+1);
            scanf(" %[^\n]", classrooms[i].students[j].name);
            printf("Enter scroe: ");
            scanf("%d", &classrooms[i].students[j].score);
        }
    }
}
//function for displaying
void displayClassrooms(struct Classroom classrooms[], int n) {
    printf("Classroom details\n");
    for (int i = 0; i < n; i++) {
        printf("Classroom: %d", classrooms[i].roomNumber);
        for(int j = 0; j < 5; j++) {
            printf("Student %d: %s, Score: %d", j + 1, classrooms[i].students[j].name, classrooms[i].students[j].score);
        }
    }
}

//nested structure
struct Author {
    char name[50];
    int age;
};

struct Book1 {
    char title[50];
    int year;
    struct Author author;
};
//function to input the details
void inputBooks(struct Book1 books[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details");
        scanf(" %[^\n]", books[i].title);
        printf("Enter year: ");
        scanf("%d", &books[i].year);

        //input author details
        printf("Enter authors name: ");
        scanf(" %[^\n]", books[i].author.name);
        printf("Enter age: ");
        scanf("%d", &books[i].author.age);
        
    } 
}
void displayBooks(struct Book books[], int n) {
    printf("Book details:");
    for (int i = 0; i < n; i++) {
        printf("Book %d: ", i + 1);
        printf("Title: ", books[i].title);
        printf("Year: ", books[i].year);
        printf("Author: ", books[i].author.name);
        //the same with the age
    }
}
//array of structtures
struct Student5 {
    char name[50];
    int age;
    float score;
};

struct Employee3 {
    char name[50];
    float salary;
};
struct Person2 {
    char name[50];
    int age;
};

void bubbleSort(struct Employee3 arr[], int n) {
    struct Employee3 temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n - i -1; j++) {
            if(arr[j].salary > arr[j+1].salary) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main () {
    int item;
    printf("Enter item: ");
    scanf("%i", &item);

    switch(item) {
        case 1: {
            struct Student students[5]; //use array for easier access of the data
            int i;

            for (i = 0; i < 5; i++) {
                printf("Enter details: ");
                printf("ID: ");
                scanf("%d", &students[i].id); //acess the id of the student
                //the same with the other variables
                //&students[i]. (the variable name)
                scanf(" %[^\n]", &students[i].name);
                //for the characters or strings that includes spaces
                //use %[^\n] to include the spaces

                //for printing
                for(i = 0; i < 5; i++) {
                    printf("Information: %d %s %s %d\n", students[i].id); //the same with the others)
                }
            }
            break;
        }
        case 2: {
            //the same with the prev one
            struct Employee employees[5];

            for (int i = 0; i < 5; i++) {
                printf("Enter name: ");
                scanf(" %[^\n]", employees[i].name);
                printf("Rate: ");
                scanf("%f", &employees[i].rate);
                printf("Hours: ");
                scanf("%i", &employees[i].hours);
                //it should be inside the loop

                employees[i].salary = employees[i].rate * employees[i].hours;
            }
            //since you have to determine its salary
            //for printing
            
            for (int i = 0; i < 5; i++) {
                printf("Name: %s", employees[i]. name);
            }
            break;
        }
        case 3: {
            struct Book books[3];

            for(int i = 0; i < 3; i++) {
                printf("Title: ");
                scanf(" %[^\n]", books[i].title);
                printf("Author: ");
                scanf(" %[^\n]", books[i].author);
                //and the the year
            }

            //for printing
            for(int i = 0; i < 3; i++) {
                printf("%s", books[i].title);
            }
            break;
        }
        case 4: {
            struct Student1 student;
            
            printf("Name: ");
            scanf(" %[^\n]", student.name);
            //for the three subjects
            for (int i = 0; i < 3; i++) {
                scanf("%f", &student.grades[i]);
            }
            student.average = (student.grades[0] + student.grades[1] + student.grades[2]) / 3;
            printf("%s", student.name);
            break;
        }
        case 5: {
            struct Product product[5];
            for (int i = 0; i < 5; i++) {
                printf("Product: ");
                scanf(" %[^\n]", product[i].name);
                printf("Price: ");
                scanf("%f", &product[i].price);

                for(int i = 0; i < 5; i++) {
                    printf("%i", product[i].name);
                }
            }
            break;
        }
        case 6: {
            char sentence[100];
            printf("Enter sentence: ");
            scanf(" %[^\n]", sentence);

            printf("Num: %i", vowelCounter(sentence));
            break;
        }
        case 7: {
            numOperator();
            break;
        }
        case 8: {
            struct Student2 student;
            printf("Enter name: ");
            scanf(" %[^\n]", student.name);
            //for computing: 
            //student.finalGrade = (student.quiz * 0.4) + (student.exam * 0.6);
            //ternary operator
            //condition ? expression if true : expression if false
            //student.finalGrade >= 75 ? "Passed" : "Failed"

            break;
        }
        case 9: {
            int n;
            printf("Enter the num of size: ");
            scanf("%i", &n);
            int arr[n], rev[n];

            for(int i = 0; i < n; i++) {
                printf("Enter: ");
                scanf("%i", &arr[i]);
            }
            arrayReversal(arr, rev, n);
            for(int i = 0; i < n; i++) {
            printf("%i", rev[i]);
            }
            break;
        }
        case 10: {
        //perfect num checker
        int num, i, sum = 0;
        printf("Enter num: ");
        scanf("%i", &num);
        
        for(int i = 0; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            printf("%d", num);
        } else
            printf("Num is not a perfect num");
        break;
        }
        case 11: {
        char sentence[100];
        int upperCount = 0, lowerCount = 0;
        printf("Enter a sentence: ");
        scanf(" %[^\n]", sentence);
        
        for (int i = 0; sentence[i] != '\0'; i++) {
            if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
                upperCount++;
            } else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
                lowerCount++;
            }
            printf("Upper: ");
        }
        break;
        }
        case 12: {
            //second largest number:
            int n, i, largest, secondLargest;

            printf("Enter the num: ");
            scanf("%d", &n);

            int arr[n];
            printf("Enter num: ");
            for (int i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
            }
            largest = secondLargest = arr[0];

            for(int i = 0; i < n; i++) {
                if (arr[i] > largest) {
                    secondLargest = largest;
                    largest = arr[i];
                } else if (arr[i] > secondLargest && arr[i] != largest) {
                    secondLargest = arr[i];
                }
            }
            break;
        }
        case 13: {
            //diagonal sum
            int matrix[3][3], sum = 0;

            printf("Enter elements: ");
            for ( int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    scanf("%d", &matrix[i][j]);
                }
            }
            for (int i = 0; i < 3; i++) {
                sum += matrix[i][i];
            }
            break;
        }
        case 14: {
            //binary to decimal converter
            long long binary;
            int decimal = 0, base = 0, digit;

            printf("Enter num: ");
            scanf("%lld", &binary);

            while (binary > 0) {
                digit = binary % 10;
                decimal += digit *pow(2,base);
                binary /= 10;
                base++;
            }
            break;
        }
        case 15: {
            //void return type & with parameters
            int a, b;
            scanf("%i %i", &a, &b);
            addNumbers(a, b);
            break;
        }
        case 16: {
            //display even or odd
            checkEvenOdd(7);
            break;
        }
        case 17: {
            int a = 2, b = 3;
            break;
        }
        case 18: {
            int n;
            printf("Enter num: ");
            scanf("%d", &n);
        
            struct Classroom classrooms[n]; //array of classroom structures
            //function calls
            inputClassroms(classrooms, n);
            displayClassrooms(classrooms, n);

            break;
        }
        case 19: {
            int n;
            printf("Enter num: ");
            scanf("%d", &n);
            struct Book books[n]; //array of structures
            inputBooks(books, n);
            displayBooks(books, n);

            break;
        }
        case 20: {
            int n;
            printf("Enter num: ");
            scanf("%d", &n);

            struct Student5 students[n];
            for (int i = 0; i < n; i++) {
                printd("Enter name: ");
                scanf("%s", students[i].name);
                printf("Enter age: ");
                scanf("%d", &students[i].age);

            }
            break;
        }
        case 21: {
            int n;
            scanf("%d", &n);

            struct Employee3 employees[n];
            for (int i = 0; i < n; i++) {
                printf("Name: ");
                scanf("%s", employees[i].name);
                printf("Enter salary: ");
                scanf("%f", &employees[i].salary);
            }
            bubbleSort(employees, n);
            break;
        }
        case 22: {
            struct Person2 p, *ptr;
            ptr = &p;

            printf("enter name: ");
            scanf("%s", (*ptr).name);
            
        }
        
    }
    return 0;
}