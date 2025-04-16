#include <stdio.h>

int countString(const char *string) {
    int i = 0;
    int *pointer = &i;
    while (string[i] != '\0') {
        if(string[i] != '\0') {
            i++;
        }
    }
    
    int len = *pointer;
    return len;
}

int main() {
    char *string = {"Mary Marghareth Bueno"};

    int length = countString(string);
    printf("The length of the string: %i", length);
    return 0;
}