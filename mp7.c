#include <stdio.h>

struct Person {
    char name[50];
};

struct BankAccount {
    double balance;
    struct Person accountHolder;
};

int main() {
    struct Person p1;
    struct BankAccount b1;

    printf("Enter a name: ");
    scanf(" %[^\n]", p1.name);
    printf("Enter the initial balance: ");
    scanf("%lf", &b1.balance);

    b1.accountHolder = p1;

    printf("Acount Holder: %s\n", b1.accountHolder.name);
    printf("Balance: $%.2lf", b1.balance);



    return 0;
}