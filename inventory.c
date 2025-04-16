#include <stdio.h>
struct Product {
    char name[50]; //product name
    char category[50];
    char unit[30]; //unit
    float price;
    int stock;
};

int main() {
    int k;
    printf("Enter num");
    scanf("%i", &k);

    switch(k) {
        case 1: {
            int n;
            printf("Enter: ");
            scanf("%d", &n);

            struct Product inventory[n];
            for (int i = 0; i < n; i++) {
                printf("enter details: , i+1");

                printf("Name: ");
                scanf(" %[^\n]", inventory[i].name);
            }
            break;
        }
    }
    return 0;
}