#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the limit of the string: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input.");
    } else {
    char *name = (char*)malloc((n+1) * sizeof(char)); 

    if (name == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the name: ");
    scanf(" %[^\n]", name); 

    name[n] = '\0';

    printf("Name: %s\n", name);

    free(name);
    }
    return 0;
}
