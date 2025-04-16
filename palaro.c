#include <stdio.h>

float findMinimum(float arr[], int size) {
    int i = 0;
    float min;
    
    while (i < size) {
        if(arr[i] != 0) {
            min = arr[i];
            break;
        }
        i++;
    }
    
    for(int j = 0; j < size; j++) {
        if (arr[j] != 0) {
        if(min >= arr[j]) {
            min = arr[j];
            }

        }

    }
    return min;
}

float findMaximum(float arr[], int size) {
    int i = 0;
    float max;
    
    while (i < size) {
        if(arr[i] != 0) {
            max = arr[i];
            break;
        }
        i++;
    }
    

    for(int j = 1; j < size; j++) {
        if(arr[j] != 0) {
        if (max <= arr[j]) {
            max = arr[j];

            }
        }
        
    }
    return max;
}

void minJudge(float arr[], int size, int judges[], float min) {
    int j = 0;
    if (size == 20) {
        for (int i = 0; i < size; i++) { 
            if (arr[i] == min) {
                judges[j] = (i % 10) + 1; // Reset judge numbers for second half
                j++;
            }
        }
    } else { 
        for (int i = 0; i < size; i++) {
            if (arr[i] == min) {
                judges[j] = i + 1;
                j++;
            }
        }
    }

    // Print judges who gave the minimum score
    for (int i = 0; i < j; i++) {
        printf("%d ", judges[i]);
    }
}


void maxJudge(float arr[], int size, int judges[], float max) {
    int j = 0;

    if (size == 20) {
        for (int i = 0; i < size; i++) { // Checking for maximum
            if (arr[i] == max) {
                judges[j] = (i % 10) + 1; // Reset judge numbers for second half
                j++;
            }
        }
    } else { 
        for (int i = 0; i < size; i++) {
            if (arr[i] == max) {
                judges[j] = i + 1;
                j++;
            }
        }
    }

    // Print judges who gave the maximum score
    for (int i = 0; i < j; i++) {
        printf("%d ", judges[i]);
    }
    printf("\n");
}
void removeScore(float a[], int size, float min, float max) { //this removes the highest & lowest score

    for (int i = 0; i < size; i++) {
        if (a[i] == min) {
            a[i] = 0;
            break;
        }
    }

    for (int i = 0; i < size; i++) {
        if (a[i] == max) {
            a[i] = 0;
            break;
        }
    }
}

void mergeArrays(float a[], float b[], float merged[]) {
    for (int i = 0; i < 10; i++) {
        merged[i] = a[i];
    }
    for (int i = 0; i < 10; i++) {
        merged[10 + i] = b[i];
    }
}

// Function to calculate the average
float calculateAverage(float arr[]) {
    float sum = 0.0, ave;

    for (int i = 0; i < 20; i++) {
            sum += arr[i];
        }

        ave = sum / 14.0;
        return ave;
    }

int main() {
    int num;
    scanf("%d", &num);

    float judge1[10], judge2[10], combined[20];
    int judges[20]; //judges are arrays to store the judge number

    for (int j = 0; j < num; j++) {
        for (int i = 0; i < 10; i++) { //abellana judge scores
            scanf("%f", &judge1[i]);
        }
        for (int i = 0; i < 10; i++) { //sm judges
            scanf("%f", &judge2[i]);
        }  
        float min1 = findMinimum(judge1, 10);
        float max1 = findMaximum(judge1, 10);
        float min2 = findMinimum(judge2, 10);
        float max2 = findMaximum(judge2, 10);
        
        minJudge(judge1, 10, judges, min1);
        maxJudge(judge1, 10, judges, max1);
        minJudge(judge2, 10, judges, min2);
        maxJudge(judge2, 10, judges, max2);
        removeScore(judge1, 10, min1, max1);
        removeScore(judge2, 10, min2, max2);
        mergeArrays(judge1, judge2, combined);
        
        float min3 = findMinimum(combined, 20);
        float max3 = findMaximum(combined, 20);
        minJudge(combined, 20, judges, min3);
        maxJudge(combined, 20, judges, max3);
        removeScore(combined, 20, min3, max3);
        
        float avg = calculateAverage(combined);
        printf("%.2f\n", avg);

    }
    return 0;
}
