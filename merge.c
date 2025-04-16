#include <stdio.h>


int main () {
    int n, m;
    printf("Enter the number of elements 1: ");
    scanf("%i", &n);
    printf("Enter the number of elements2: ");
    scanf("%i", &m);
    int *arr1 = (int*)malloc(n*sizeof(int));
    int *arr2 = (int*)malloc(m*sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Element(1) i: ");
        scanf("%i", &arr1[i]);
    }

    for (int i = 0; i < m; i++) {
        printf("Element(2) i: ");
        scanf("%i", &arr2[i]);
    }

    int *merge = (int*)malloc((n*m)*sizeof(int));
    int count = 0;

    for (int i = 0; i < n; i++) {
        merge[count] = arr1[i];
        count++;
    }

    for(int i = 0; i < m; i++) {
        merge[count] = arr2[i];
        count++;
    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void mergeArray(int *arr,int *merge, int n, int count) {
    for (int i = 0; i < n; i++) {
        merge[count] = arr[i];
        count++;
    }
}

int main () {
    int n, m;
    printf("Enter the number of elements 1: ");
    scanf("%i", &n);
    printf("Enter the number of elements2: ");
    scanf("%i", &m);
    int *arr1 = (int*)malloc(n*sizeof(int));
    int *arr2 = (int*)malloc(m*sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Element(1) i: ");
        scanf("%i", &arr1[i]);
    }

    for (int i = 0; i < m; i++) {
        printf("Element(2) i: ");
        scanf("%i", &arr2[i]);
    }

    int *merge = (int*)malloc((n+m)*sizeof(int));
    int count = 0;
    
    mergeArray(arr1, merge, count, n);
    mergeArray(arr2, merge, count + n - 1, m);

   
    
    for (int i = 0; i < n+m; i++) {
        printf("%i ", merge[i]);
    }
    
    free(arr1);
    free(arr2);
    free(merge);
    return 0;
}