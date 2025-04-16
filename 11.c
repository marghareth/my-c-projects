#include <stdio.h>

int integerAns(char n[]) {
    int ans = 0, i = 0, negative = 0;

    if (n[0] == '-'){
    negative = 1;
    i = 1;
    }

    while (n[i] != '\0') {
        ans = ans * 10 + (n[i] - '0');
        i++;
    }

    if(negative) 
    ans = -ans;

    return ans;
} 

int main() {
    char str[50];
    scanf("%s", str);

    printf("%i\n", integerAns(str));

    return 0;
}