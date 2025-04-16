#include <stdio.h>

// 1:
int logAns(int n) {
    int count = 0 ;
    while(n >= 10) {
        n /= 10;
        count++;
    }
    return count;
}

//2:
int floorAns(double n) {
    int typecast = n;
    if(n < 0 && n != typecast) {
        return typecast - 1;
    }
    return typecast;
}

//3:
int ceilingAns(double n) {
    int num = n;
    if (num < n) {
    return num + 1; 
    } else {
        return num;
    }

}

//4:
int alphanumeric(char n) {
    if (n >= '0' && n <= '9' || n >= 'a' && n <='z' || n >= 'A' && n <='Z') {
        return 1;
    } 
        return 0;
}

//5:
int letterAns(char n) {
    if (n >= 'a' && n <= 'z' || n >= 'A' && n <= 'Z') {
        return 1;
    } else { 
        return 0;
    }
}

//6:
int upperCase(char n) {
    if (n >= 'A' && n<= 'Z') {
        return 1;
    } return 0;
}

//7:
int lowerCase(char n) {
    if(n >= 'a' && n <= 'z') {
        return 1;
    } return 0;
}

//8:
char lowerUpper(char n) {
    if (n >= 'a' && n <= 'z'){
        return n - 32;
    } return n;
}

//9:
char upperLower(char n) {
    if (n >= 'A' && n <= 'Z') {
        return n + 32;
    } return n;
}

//10:
int punctuation(char n) {
    if (n == '.' || n == '?' || n == '!' || n == ',' || n == ';' || n == ':') {
        return 1;
    } return 0;
}

//11: (typecasting wont work)
int integerAns(char n[]) {
    int ans = 0, i = 0;
    int negative = 0;

    if (n[0] == '-'){
    negative = 1;
    i = 1;
    }

    while (n[i] != '\0') {
        ans = ans * 10 + (n[i] - '0');
        i++;
    }
    if(negative) {
    ans = -ans;
    }
    return ans;
} 

//12. (typecasting wont work)
double doubleAns(char n[]) {
    double result = 0.0;
    double placeValue = 1.0;
    int i = 0;

    while (n[i] != '\0' && n[i] != '.') {
        result = result * 10 + (n[i] - '0');
        i++;
    }
    if (n[i] == '.') {
        i++;
        placeValue = 0.1;

        while (n[i] != '\0') {
            result += (n[i] - '0') * placeValue;
            placeValue *= 0.1;
            i++;
        }
    }
    return result;
} 

//13.
int stringFloat(char n[]) {
    int count = 0;
    int start = 0;

    if (n[0] == '-') {
        start = 1;
    }

    for (int i = start; n[i] != '\0'; i++) {
        if (n[i] == '.') {
            count++;
        } else if (!(n[i] >= '0' && n[i] <= '9')) {
            return 3; 
        }
    }

    if (count > 1) {
        return 3; 
    } else {
        return 1; 
    }
}

//14.
int absoluteValue(int n) {
    int count = 0;
    if (n >= 0) {
        return n;
    } else {
        while (n != 0) {
            count += 1;
            n = n + 1;
        }
    } return count;
}

//15.
void stringCopy(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0') {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
}
//16.
int subString(char a[], char b[]) {
    int i, j;
    for(i = 0; b[i] != '\0'; i++) {
        for(j = 0; a[j] != '\0'; j++) {
        if(b[i+j] != a[j]) 
        break;
        }
        if(a[j] == '\0') {
            return 1;
        }
    }
    return 0;
}

//17.
int compareString(char a[], char b[]) {
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {  
            if (a[i] < b[i]) {
                return 2; // BEFORE
            } else {
                return 3; // AFTER
            }
        }
        i++;  
    }

    if (a[i] == '\0' && b[i] == '\0') {
        return 1;
    } 

    if (a[i] == '\0') {
        return 2; // BEFORE
    } else {
        return 3; // AFTER
    }
}


//18.
void camelCase(char str[], char result[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                result[i] = str[i] + 32; 
            } else {
                result[i] = str[i];  
            }
        } else {
            if (str[i] >= 'a' && str[i] <= 'z') {
                result[i] = str[i] - 32;  
            } else {
                result[i] = str[i];
            }
        }
    }
}

    
//19.
void reverseString(char st[], char result[]) {
    int count = 0;
    for(int i = 0; st[i] != '\0'; i++) {
        count++;
    }
    int j = 0;
    for(int i = count - 1; i >= 0; i-- ) {
        result[j] = st[i];
        j++;
    }
}

//20.
int reverseInt (int n) {
    int remainder, result = 0;
    
    while (n != 0){
        remainder = n % 10;
        result = result * 10 + remainder;
        n = n / 10;
    }
    return result;
}

int main () {
    int testcase;
    scanf("%i", &testcase);

    while(testcase--) {
    int item;
    scanf("%i ", &item);

    if(item == 1) {

    //1:
    int num;
    scanf("%d", &num);

    int count = logAns(num);
    printf("%d\n", count);

    } else if (item == 2) {
    //2.
    double num;
    scanf("%lf", &num);

    int floor = floorAns(num);
    printf("%i\n", floor);

    } else if (item == 3) {
    //3.
    double num;
    scanf("%lf", &num);

    int ceiling = ceilingAns(num);
    printf("%i\n", ceiling);

    } else if (item == 4) {
    //4.
    char input;
    scanf("%c", &input);

    if(alphanumeric(input) == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    } else if (item == 5) {
    //5.
    char input;
    scanf("%c", &input);
    int result = letterAns(input);
    if(result == 1) {
        printf("YES\n");
    } else printf("NO\n");

    } else if (item == 6) {
    //6.
    char input;
    scanf("%c", &input);
    int result = upperCase(input);
    if(result == 1) {
        printf("YES\n");
    } else printf("NO\n");

    } else if (item == 7) {
    //7.
    char input;
    scanf("%c", &input);

    int result = lowerCase(input);
    if(result == 1) {
        printf("YES\n");
    }  else printf("NO\n");

    } else if (item == 8) {
    //8.
    char input;
    scanf("%c", &input);

    printf("%c\n", lowerUpper(input));

    } else if (item == 9) {
    //9.
    char input;
    scanf("%c", &input);

    printf("%c\n", upperLower(input));

    } else if (item == 10) {
    //10.
    char input;
    scanf("%c", &input);
    int result = punctuation(input);
    if(result == 1) {
        printf("YES\n");
    } else printf("NO\n");

    } else if (item == 11) {
    //11.
    char str[50];
    scanf("%s", str);

    int ans = integerAns(str);

    printf("%i\n", ans);
    } else if (item == 12) {

        char str[50];
        scanf("%s", str);

        printf("%.4lf\n", doubleAns(str));

    } else if(item == 13) {

    //13.
    char str[50];
    scanf("%s", str);
    int result = stringFloat(str);

    if (result == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    } 
    } else if (item == 14) {
    //14.
    int num;
    scanf("%i", &num);

    printf("%i\n", absoluteValue(num));
    }  else if(item == 15) {
    //15.
    char str[50], destination[50];
    scanf("%s %s", str, destination);

    stringCopy(str, destination);
    printf("%s\n", destination);

    } else if(item == 16) {
    //16.
    char str1[50], str2[50];
    scanf("%s %s", str1, str2);

    int result = subString(str1, str2);
    if(result == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    } else if (item == 17) {
    //17.
    char str1[50], str2[50];
    scanf("%s %s", str1, str2);

    int result = compareString(str1, str2);

    if (result == 1) {
        printf("YES\n");
    } else if (result == 3) { // AFTER
        printf("AFTER\n");
    } else {
        printf("BEFORE\n");
    }

    } else if (item == 18) {
    //18.
    char str[50], result[50];

    scanf("%s", str);

    camelCase(str, result);
    printf("%s\n", result);

    } else if (item == 19) {
    //19.
    char st[50], result[50];

    scanf("%s", st);

    reverseString(st, result);
    printf("%s\n", result);

    } else {
    //20.
    int num;
    
    scanf("%i", &num);

    printf("%i\n",reverseInt(num));
    }
    
    }
    return 0;
}

