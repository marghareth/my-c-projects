#include <stdio.h>
#include <math.h>

int totalSticks() {
    int num;
    scanf("%i", &num);

    if (num == 0) {
        return 0;
    } else {
        int total = 5 * num + 1;
        return total;
    }
}

float squareArea(float s) {
    if (s <= 0) {
        return 0;
    } else {
    float area = s * s;
    return area;
    }
}

float circleArea(float r) {
    if (r <= 0) {
        return 0;
    } else {
    float area = 3.141592653589793 * (r*r);
    return area;
    }
}

void calculateBill(float a, float b) {
    float bill = a * b;
    printf("Bill Amount: %.2f\n\nThank you for using our services!\n", bill);
}

void displayBill(char a[], float b, float c) {
    printf("Customer Name: %s\n", a);
    printf("Units Consumed: %.2f\n", b);
    printf("Rate Per Unit: %.2f\n", c);
}

float monthlyPay(int a, int b, float c, int d, int e) {
    int days = a - (d + e);
    float daily = b * c;
    float regularDay = days * daily;
    float specialDay = d * daily + 0.3 * (d*daily); // this is necessary so that it will calculate if there is no special day, the same with the legal holidays
    float legalDay = e * daily + e* daily;
    float total = regularDay + specialDay + legalDay;
    
    return total;
}

float absoluteDiff(float a, float b) {
    float diff = a - b;
    if (diff < 0) {
        diff = -diff; //there's no need to declare it again
    }
    return diff;
}

float powerFour(float a, float b) {
    float dif = absoluteDiff(a, b);
    float ans = 1;

    for(int i = 0; i < 4; i++) { //it should only iterate 4 times
        ans = ans * dif;
    }
    return ans;
}

float cubeRoot(float a, float b) {
    return cbrt(powerFour(a,b));
}

int main () {
    
    printf("%i", totalSticks());

    float side, radius;
    scanf("%f %f", &side, &radius);

    float sum = squareArea(side) + circleArea(radius);
    printf("%.2f", sum);

    char name[20];
    float units_consumed, rate_per_unit;

    scanf(" %s", name);
    scanf("%f %f", &units_consumed, &rate_per_unit);

    displayBill(name, units_consumed, rate_per_unit);
    calculateBill(units_consumed, rate_per_unit);

    int working_days, working_hours, special_days, legal_days;
    float rate;

    scanf("%i %i %f %i %i", &working_days, &working_hours, &rate, &special_days, &legal_days);

    float monthlypay = monthlyPay(working_days, working_hours, rate, special_days, legal_days);

    printf("%.2f", monthlypay);

    float num1, num2;
    scanf("%.2f, %.2f", &num1, &num2);

    printf("%.3f", cubeRoot(num1, num2));

    return 0;
}
//things that i learned:
//when changing the value of the variable, no need to declared it again 
//if it involves patterns, it would be better to find a function
//always consider inputs that would likely caused errors
