#include <stdio.h>

struct Employee {
    char name[30];
    int hireDate;
    float salary;
};

int main() {
    
    //I cannot initiliaze an individual array element this way
    struct Employee emp[2] = {
        {"Marghareth", 07312025, 60000}, // First employee
        {"", 0, 0.0}            // Placeholder for second employee
    };
    


    for (int i = 1; i < 2; i++) {
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("Hire date: ");
        scanf("%i", &emp[i].hireDate);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    //print the details:
    for (int i = 0; i < 2; i++) {
        printf("Name: %s\n", emp[i].name);
        printf("Hire date: %d\n", emp[i].hireDate);
        printf("Salary: %.2f\n", emp[i].salary);
    }
    return 0;
}