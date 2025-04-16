#include <stdio.h>
#include <stdlib.h>

struct Item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

//function to read item details
void readItem(struct Item *p) {
    //allocate memory for itemName
    p->itemName = (char*)malloc(50 *sizeof(char));

    if (p->itemName == NULL) {
        printf("Memory Allocation failed.");
        exit(1);
    }

    //get input from user
    printf("Enter item name: ");
    scanf(" %s", p->itemName);

    printf("Enter price: ");
    scanf("%f", &p->price);

    printf("Enter quantity: ");
    scanf("%d", &p->quantity);

    if (p->price <= 0 || p->quantity <=0) {
        printf("Invalid input.");
        exit(1);
    }

    //compute amount
    p->amount = p->quantity * p->price;
}
//function to print item details
void printItem(struct Item *p) {
    printf("\nItem Details: \n");
    printf("Name: %s\n", p->itemName);
    printf("Price: %.2f\n", p->price);
    printf("Quantity: %d\n", p->quantity);
    printf("Total amount: %.2f\n", p->amount);
}

int main() {
    struct Item myItem; //declare an item structure
    struct Item *ptr = &myItem; //declare a pointer to the structure

    readItem(ptr);
    printItem(ptr);

    //free dynamically allocated memory
    free(ptr->itemName);
    
    return 0;
}