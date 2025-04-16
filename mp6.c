#include <stdio.h>

struct Savings{
    int bills;
    int coins;
};

int main() {
    struct Savings s1 = {0,0};
    int n, value;

    printf("Enter the number of values: ");
    scanf("%i", &n);

    if (n <= 0) 
    printf("Invalid input.\n");
    else {
        for (int i = 0; i < n; i++) {
            printf("Enter value %i: ", i + 1);
            scanf("%i", &value);

            if (value <= 0) {
                printf("Invalid input.");
                return 0;
            }

            if ( i % 2 == 0) 
                s1.bills += value;
            else 
                s1.coins += value;
        }
        printf("Savings: %i bills and %i coins\n", s1.bills, s1.coins);
    }

    return 0;
}