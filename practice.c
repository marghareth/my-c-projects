#include <stdio.h>

//1:
void calculateBill(float a, float b) {
    float bill = a * b;
    printf("Bill Amount: %.2f\n\nThank you for using our services!\n", bill);
}

void displayBill(char a[], float b, float c) {
    printf("Customer Name: %s\n", a);
    printf("Units Consumed: %.2f\n", b);
    printf("Rate Per Unit: %.2f\n", c);
}

//2:
double calculateAverage(double a, double b, double c) {
    double average = (a + b + c) / 3;
    return average;
}

void productRatings(char productName[], char category[], double quality, double price, double service) {
    printf("Product Name: %s\n", productName);
    printf("Category: %s\n", category);
    printf("Quality Rating: %.2lf\n", quality);
    printf("Price Rating: %.2lf\n", price);
    printf("Service Rating: %.2lf\n", service);
    printf("Overall Average Rating: %.2lf\n", calculateAverage(quality, price, service));
}

int main() {
    char name[20];
    float units_consumed, rate_per_unit;

    printf("Enter Customer Name: \n");
    scanf("%s", name);
    printf("Enter Units Consumed: \n");
    scanf("%f", &units_consumed);
    printf("Enter Rate Per Unit: \n");
    scanf("%f", &rate_per_unit);

    displayBill(name, units_consumed, rate_per_unit);
    calculateBill(units_consumed, rate_per_unit);

    //2.
    char name1[20], category[20];
    double quality, price, service;

    printf("Enter Product Name: \n");
    scanf(" %s", name1);
    printf("Enter Category: \n");
    scanf(" %s", category);
    printf("Enter Quality Rating: \n");
    scanf("%lf", &quality);
    printf("Enter Price Rating: \n");
    scanf ("%lf", &price);
    printf("Enter Service Rating: \n");
    scanf("%lf", &service);

    productRatings(name1, category, quality, price, service);
    
    return 0;
}