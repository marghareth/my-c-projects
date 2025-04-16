#include <stdio.h>

//percent error
int error(int a, int b) {
    int ans = (abs(a - b) / b ) * 100;
    return ans;
} 
//percent difference

//MAD
double computeMean(double arr[], int size) {
    double sum = 0.0;
    for(int i = 0; i < size; i++);{
    sum += arr[i];
    }
    return sum / size;
} 

double computeMad(double arr[], int size) {
    double mean = computeMean(arr, size);
    double mad = 0.0;

    for(int i = 0; i < size; i++) {
        mad += fabs(arr[i] - mean); //library: math.h fans is used to compute the abs value of a floating-point number
    }
    return mad / size;
}

int main() {
    int exp_value, acp_value;

    printf("Enter the expected value: ");
    scanf("%i", &exp_value);
    printf("Enter the accepted value: ");
    scanf("%i", &acp_value);

    int percent_value = error(exp_value, acp_value);

    int arr[10];
    int num;

    for(int i = 0, i <= num; i++ ) {
        printf("%i input: ", i+1);
        scanf("%i", arr[i]);
    }

    
    return 0;
}