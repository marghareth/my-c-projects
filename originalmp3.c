#include <stdio.h>

void findMininum(int n[]) { //minimum for the judges 1 and judges 2
    //this declaration is only correct if I only need to display or store the result inside the function

    int hold[10];
    int size = sizeof(n)/ sizeof(n[0]); // this kind of function won't give the correct size because sizeof() only works properly inside the same function where the array is declared
    //it can be fixed by passing the size as a parameter;
    //void findMinimum (int n[], int size)
    int j = 0;

    for(int i = 0; i < size; i++){
        if ( n[i] == 5) {
            hold[j] = i;
            j++;
        }
    }
}

int findMaximum(int n[]) { //maximum for the judges 1
    int hold1[10];
    int k = 0;

    for(int m = 0; m < 10; m++){
        if ( n[m] == 8) {
            hold1[k] = m;
            k++;
        }
    }
    return hold1[]; // this is incorrect
    //c cannot return arrays from functions
    //instead, pass another array as a parameter
    //void findMaximum (int m[], int size, int hold1[])
}

int findMaximumSM(int o[]) { //maximum for the judges 2
    int hold2[10];
    int p = 0;

    for(int q = 0; q < 10; q++){
        if ( o[q] == 8) {
            hold2[p] = q;
            p++;
        }
    }
    return hold2[];
}

void removeScore(int a[]) { //this removes the highest & lowest score

    int size = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < size; i++) {
        if (a[i] == 5) {
            a[i] = 0;
            break;
        }

        if (a[i] == 8) {
            a[i] = 0;
            break;
        }
    }
}

void mergeScore(int b[], int c[]) {

    int merge[20]; //what if the array size as a parameter?
    //pass the array size as a parameter;
    //void mergeScore(int b[], int c[], int merge[], int size)
    int j = 0;

    removescore(b);
    removescore(c);

    for (int i = 0; i < 10; i++) { //for the first judge
        merge[i] = b[i];
    }

    for(int i = 10; i < 20; i++) {
        merge[i] = c[j];
        j++;
    }
}

void newMaxMin(int d[]) {
    int j = 0;
    int hold[20];

    for(int i = 0; i < 20; i++){
        if (j == 9) {
            j = 0;
        }

        if (d[i] == 5) {
            hold[j] = i;
        }
        j++;
    }

    int k = 0;

    for(int i = 0; i < 20; i++){
        if (k == 9) {
            k = 0;
        }

        if (d[i] == 8) {
            hold[j] = i;
        }
        j++;
        k++;
    }
}


//call again the remove score function for the last part

float calculateAverage(int f[]) {
    int sum = 0;
    float ave;

    for(int i = 0; i < 20; i++) {
        sum += f[i];
    }

    float ave = sum / 14.0; //because I'm performing floating-point division
    return ave;
}

int calculateSize(int g[]) {
    int size = sizeof(g) / sizeof(g[0]);

    return size;
}

int main() {
    int num;
    int judge1[12], judge2[12];

    scanf("%i", &num);

    for(int i = 0; i <= num; i++) {
        //this is where the function will iterate
        for(int j = 0; j < 10; j++) {
            printf("Enter: "); //for tracing
            scanf(" %i", &judge1[j]); //this array will store the first 10 judge
        }

        for(int k = 0; k < 10; k++) {
            printf("Enter: "); //for tracing
            scanf(" %i", &judge2[k]); //this array will store the second batch of judges
        }

    findMinimum(judge1);
    int size = calculateSize(findMinimum(judge1));
    



    }
    return 0;
}
//wrong with my code
//wrong return type, arrays can't be returned
//sizeof function does not work properly inside functions when you pass arrays
//redundant loops are not optimized