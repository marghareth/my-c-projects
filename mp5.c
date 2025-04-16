#include <stdio.h>

struct Student {
    char name[100]; 
    int age;
    float GPA;
};

int main() {
    struct Student s1;

    printf("Enter the name of the student: ");
    scanf(" %[^\n]", s1.name); 

    printf("Enter the age of the student: ");
    scanf("%i", &s1.age);

    printf("Enter the GPA of the student: ");
    scanf("%f", &s1.GPA);
    
    if (s1.age <= 0 || s1.GPA <= 0)
    printf("Invalid input."); 
    else {
    printf("Name: %s\n", s1.name); 
    printf("Age: %i\n", s1.age);
    printf("GPA: %.2f\n", s1.GPA);
    }

    return 0;
}
