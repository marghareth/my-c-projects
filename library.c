#include <stdio.h>
struct Book {
    int numberofpages;
    char title[100];
    char author[100];    
};

void displayBook(struct Book book) {
    int num = book.numberofpages;
    int pages = num / 10;
    int rem = num % 10;
    int total = pages + rem;

    for (int i = 0; i < total; i++) {
        printf("%c by %c (%i)\n", book.title, book.author, book.numberofpages);
    }

}

int main() {
    struct Book book;

    printf("Enter the number of pages: ");
    scanf("%i", &book.numberofpages);
    printf("Enter the title of the book: ");
    scanf(" %[^\n", book.title);
    printf("Enter the author of the book: ");
    scanf(" %[^\n]", book.author);

    displayBook((book));


    return 0;
}