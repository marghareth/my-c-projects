#include <stdio.h>
struct Book {
    char *title;
    char *author;
    float price;
    int quantity;
};

int main() {
    int n, choice, count = 0;

    printf("Enter the maximum number of books: ");
    scanf("%d", &n);

    struct Book *books = (struct Book*)malloc(n * sizeof(struct Book));

    while (1) {
        printf("\n1. Add Book\n2. Display books\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

    
    }
    return 0;
}