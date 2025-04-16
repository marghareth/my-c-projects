#include <stdio.h>
#include <stdilb.h>

//pointers
//a program that reverses an array using pointers
void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
//implement a singly linked list. Create a function to insert a new node at the ened of the lsit
struct Node {
    int data;
    struct Node *next;
};

//function to insert a new node at the end
void insertEnd(struct Node **head, int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *head;
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (last->next != NULL) {
        last = last->next;   
    }
    last->next = newNode;
}

void printList(struct Node *head)  {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n")
}

//using pointers with structures
struct Employee {
    char name[50];
    int age;
    float salary;
};
//function to input employee details
void inputEmployee(struct Employee *e) {
    printf("Enter name: ");
    scanf("%s", e->name);
    printf("Enter age: ");
    scanf("%d", &e->age);
    printf("Enter salary: ");
    scanf("%f", &e->salary);
}
//function to display employee details
void displayEmployee(struct Employee *e) {
    printf("Name: %s\n", e->name);
    printf("Age: %d\n", e->age);
    printf("Salary: %.2f\n", e->salary);
}
//dynamic array of structures
struct Student {
    char name[50];
    int age;
};
// Function to input student details
void inputStudent(struct Student *s) {
    printf("Enter student name: ");
    scanf("%s", s->name);
    printf("Enter student age: ");
    scanf("%d", &s->age);
}

// Function to display student details
void displayStudent(struct Student *s) {
    printf("Student Name: %s\n", s->name);
    printf("Student Age: %d\n", s->age);
}


int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }

    reverseArray(arr, size);

    printf("\nReversed array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }

    //dynamic memory allocation for an array
    int *arr;
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    arr = (int*)malloc(size *sizeof(int));
    if (arr == NULL) {
        printf("Memory Allocation failed\n");
        exit(1);
    }
    //initialize the array
    for(int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    //display the array
    printf("Array elements: \n");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    //free the allocated memory
    free(arr);
    
    //singly linked list
    struct Node *head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    printf("Linked list: ");
    printList(head);

    //structures & pointers
    struct Employee emp;

    inputEmployee(&emp);
    displayEmployee(&emp);

    //allocating memory
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n students
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input details for each student
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i + 1);
        inputStudent(&students[i]);
    }

    // Display details of each student
    for (int i = 0; i < n; i++) {
        printf("Student %d details:\n", i + 1);
        displayStudent(&students[i]);
    }

    // Free the allocated memory
    free(students);

    return 0;
}