#include <stdio.h>
#include <stdlib.h>
//create a program to manage student records using structures
//store student information 
//implement functions to add, display, search, update and delete records
//use pointers to navigate through array

//define structure for student
struct Student {
    int id;   //an integer variable to store the student's id
    char name[50];
    float grade;
};

//function prototypes
void addStudent(struct Student *students, int *count); //will be used to add student details
void displayStudents(struct Student *students, int count); //this function will be used to display all student details

int main() {
    int n, choice, count = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    //n stores the total num of students, choice - stores the user's menu choice, count - keeps track of how many students have been added

    //dynamic memory allocation for students
    struct Student *students = (struct Student *)malloc (n* sizeof(struct Student));

    //treat the struct Student as a data type

    if (students == NULL) {
       printf("Memory allocation failed.\n");
       return 1;
    }

    while (1) {
        printf("\n1. Add Student\n2.Display Students\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                if (count < n) 
                    addStudents(students, &count);
                else
                    printf("Student limit reached. \n");
                break;
            }
            case 2: {
                displayStudents(students, count);
                break;
            }
            default: {
                printf("Exit");
                break;
            }
        }
        //free allocated memory
        free(students);

        return 0;
    }
}

//function to add a student
void addStudents(struct Student *students, int *count) {
    printf("Enter Student ID: ");
    scanf("%d", &students[*count].id);
    printf("Enter name: ");
    scanf(" %s", students[*count].name);
    printf("Enter grade: ");
    scanf("%f", &students[*count].grade);
    (*count)++;
}

//function to display student details
void displayStudents(struct Student *students, int count) {
    int i;
    printf("\nStudent Records: \n");
    for (i = 0; i < count; i++){
        printf("ID: %d, Name: %s, Grade: %.2f\n", students[i].id, students[i].name, students[i].grade);
    }
}
