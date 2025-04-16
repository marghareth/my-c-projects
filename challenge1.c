#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter num: ");
    scanf("%i", &n);
    getchar();

    char *name = (char*)malloc((n+1) * sizeof(char));

    printf("Enter string: ");
    fgets(name, n+1, stdin);

    printf("%s", name);
    return 0;
}