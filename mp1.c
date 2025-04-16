#include <stdio.h>

int calculateLog (int a) {
    int count = 0;
    while (a > 10) {
        a = a / 10;
        count++;
    }
    return count;
}
int calculateFloor(double a) {
    int typecast = a; //for typecasting (int)a = this converts the double into an integer
    if(a < 0 && a != typecast) {
        return typecast - 1; //this is for negative inputs
    }
    return typecast;
}
int calculateCeiling(double a) {
    int typecast = a;
    if (a < 0 && a != typecast) {
        return typecast;
    } else if (a > typecast) {
        return typecast + 1;
    } else {
        return typecast;
    }  
}

int determineAlpha(char a) {
    if (a >= '0' && a <= '9' || a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}
int engAlpha(char a) {
    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
        return 1;
    else 
        return 0;
}
int upperLetter(char a) {
    if(a >= 'A' && a <= 'Z')
        return 1;
    else
        return 0;
}
int lowerLetter(char a) {
    if (a >= 'a' && a <= 'z')
        return 1;
    else
        return 0;
}
char upperEquivalent(char a) { //8
    if (a >= 'A' && a <= 'Z')
        return a;
    else 
        return a - 32;
}
char lowerEquivalent(char a) { //9
    if (a >= 'a' && a <= 'z')
        return a;
    else    
        return a + 32;
}


int main () {
    int testcase;
    scanf("%i", &testcase);

    while (tescase--) {
        int item;
        scanf("%i", &item);

        switch(item) {
            case 1: {
                int num;
                scanf("%i", &num);

                printf("%i\n", calculateLog(num));
                break;
            }
            case 2: {
                double num;
                printf("Enter num: ");
                scanf("%lf", &num); //format specifier for double is %lf, while for float is %f
    
                printf("Ans: %i", calculateFloor(num));
    
                break;
            }
            case 3: {
                double num;
                scanf("%lf", &num);
    
                printf("Ans: %i", calculateCeiling(num));
                break;
            }
            case 4: {
                char input;
                scanf(" %c", &input);

                int result = determineAlpha(input);
                if (result == 0) 
                    printf("NO\n");
                else //there should be else
                    printf("YES\n");
                break;
            }
            case 5: {
                char input;
                scanf(" %c", &input);

                int result = engAlpha(input);
                if (result == 0) 
                    printf("NO\n");
                else //there should be else
                    printf("YES\n");
                break;
            }
            case 6: {
                char input;
                scanf(" %c", &input);

                char result = upperLetter(input);
                if (result == 0) 
                    printf("NO\n");
                else //there should be else
                    printf("YES\n");
                break;
            }
            case 7: {
                char input;
                scanf(" %c", &input);

                char result = lowerLetter(input);
                if (result == 0) 
                    printf("NO\n");
                else //there should be else
                    printf("YES\n");
                break;
            }
            case 8: {
                char input;
                scanf(" %c", &input);

                int result = upperEquivalent(input);
                printf("%i\n", result);
                break;
            }
            case 9: {
                char input;
                scanf(" %c", &input);

                int result = lowerEquivalent(input);
                printf("%i\n", result);
                break;
            }
            case 10: {

                break;
            }
        }
    }
    return 0;
}