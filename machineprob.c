#include <stdio.h>
//structure
struct structure_name {
    data_type member1;
    data_type member2;
    ...
    data_type memberN;
};

//ex:
struct Student {
    char name[50];
    int age;
    float grade;
};
//structure for employee information
struct Employee {
    int id;
    char name[50];
    float salary;
};
//structure for book information
struct Book {
    char title[100];
    char author[100];
    int pages;
    float price;
};
//structure with two variables
struct Car {
    char model[50];
    int year;
    float price;
};
//array of structures(multiple students)
struct Student {
    char name[50];
    int age;
    float grade;
};
//vowel counter
int vowelCount(char n[]) {
    int count = 0;
    for (int i = 0; n[i] == '\0', i++) {
    if (n == a || n == e || n == i || n == o || n == u) {
        count++;
    }

    return count;
    }
}
// even and odd separator
void numSeparator(int n[], int size, int even[], int odd[]) {
    int even[size];
    int odd[size];
    int i = 0, k = 0;

    for (int j = 0; j < size; j++) {
        if (n[i] % 2 == 0) {
            even[i] = n[j];
            i++;
        } else {
            odd[k] = n[j];
            k++;
        }
    }

}
int main () {
    struct Student s1; //declaring structure variable
    //memory is allocared when a structure variable is declared
    
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    printf("Enter grade: ");
    scanf("%f", &s1.grade);

    struct Employee e1;

    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);
    printf("Enter Employee name: ");
    scanf(" %s", e1.name);
    printf("Enter the salary: ");
    scanf("%i", &e1.salary);

    struct Book b1;

    printf("Enter book title: ");
    scanf(" %s", b1.title);
    printf("Enter author name: ");
    scanf(" %s", b1.author);
    printf("Enter the number of pages: ");
    scanf("%i", &b1.pages);
    printf("Enter price: ");
    scanf("%f", &b1.price);

    struct Car car1, car2;

    printf("Enter model: ");
    scanf(" %s", car1.model);
    printf("Enter Year for Car 1: ");
    scanf("%d", &car1.year);
    printf("Enter Price for Car 1: ");
    scanf("%f", &car1.price);

    printf("\nEnter Model for Car 2: ");
    scanf("%s", car2.model);
    printf("Enter Year for Car 2: ");
    scanf("%d", &car2.year);
    printf("Enter Price for Car 2: ");
    scanf("%f", &car2.price);

    struct Student students[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter Name of Student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter Age of Student %d: ", i + 1);
        scanf("%d", &students[i].age);
        printf("Enter Grade of Student %d: ", i + 1);
        scanf("%f", &students[i].grade);
    }

    printf("\nStudent Information:\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %.2f\n", students[i].grade);
    }

    char vowel[20];
    int total;
    
    printf("Enter a sentence: ");
    scanf(" %s", vowel);

    total = vowelCount(vowel);

    char input[20], even[20], odd[20];
    int size;

    printf("Enter the number of integers: ");
    scanf("%i", &size);

    printf("Enter a list of integers: ");
    for (int i = 0; i < size; i++) {
        scanf("%i", &input[i]);
    }

    numSeparator(vowel, size, even, odd);

    for (int i = 0; i < size; i++) {
        printf("%i ", even[i]);\
    }
    return 0;
}