#include <stdio.h>

void reverseNum (int n[] ) {
    int reverse[10] = {0};
    for (int i = 0, j = 9; i < 10 && j >= 0; i++, j--) {
        reverse[i] = n[j];
    }

    for (int i = 0; i < 10; i++) {
        if(i == 10) {
            printf("%i", reverse[i]);
        } else {
            printf("%i ", reverse[i]);
        }
    }
    printf("\n");
}

int palindrome(int n[]) {
    int count = 0;
    for (int i = 0, j = 9; i < 10 && j >= 0; i++, j--) {
        if (n[i] == n[j]){
            count++;
        } else {
            break;
        }
    }
    return count;
}

int compareEleventh(int n[]) {
    for(int i = 0; i < 10; i++) {
        if ( n[10] == n[i]) {
            return 1;
        }
    }
    return 0;
}

void countDigit(int n[]) {
    int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, ten = 0;
    
    for(int i = 0; i < 20; i++) {
        if (n[i] >= 0 && n[i] < 10) {
            one++;
        } else if (n[i] < 100) {
            two++;
        } else if(n[i] < 1000) {
            three++;
        } else if(n[i] < 10000) {
            four++;
        } else if(n[i] < 100000) {
            five++;
        } else if(n[i] < 1000000) {
            six++;
        } else if(n[i] < 10000000) {
            seven++;
        } else if(n[i] < 100000000) {
            eight++;
        } else if(n[i] < 1000000000) {
            nine++;
        } else {
            ten++;
        }
    }
    printf("One: %i\nTwo: %i\nThree: %i\nFour: %i\nFive: %i\nSix: %i\nSeven: %i\nEight: %i\nNine: %i\nTen: %i\n", one, two, three, four, five, six, seven, eight, nine, ten);
}


int main() {

    int testcase;
    scanf("%i", &testcase);

    while(testcase--) {
    int item;
    scanf("%i ", &item);

    switch(item) {

        case 1: {
        int num[10];
        for (int i = 0; i < 10; i++) {
            scanf("%i", &num[i]);
        }
        
        reverseNum(num);
        break;
    }
        case 2: {
        int num[10];
        for (int i = 0; i < 10; i++) {
            scanf("%i", &num[i]);
        }

        if (palindrome(num) == 10) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
        break;
    }

        case 3: {
    //num3
        int num[11];
        for (int i = 0; i < 11; i++) {
            scanf("%i", &num[i]);
        }

        if(compareEleventh(num) == 1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
        break;
    }

        case 4: {
    //num4
        int num[20];
        for (int i = 0; i < 20; i++) {
            scanf("%i", &num[i]);
        }

        countDigit(num);

        break;
    }

        }

    }

    return 0;
}