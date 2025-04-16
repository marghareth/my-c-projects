#include <stdio.h>
#include <stdlib.h>

//this is a vector list
struct myVector {
    int capacity;
    int size;
    int *arr;
};

typedef struct myVector myVector;

void initList(myVector *list) {
    list->capacity = 5;
    list->size = 0;
    list->arr = (int*)malloc(list->capacity * sizeof(int));
}

int getItem(myVector *list, int index) {
    if (index >= 0 && index < list->size) {
        return list->arr[index];
    }
    return -1;
}

void setItem(myVector *list, int index, int item) {
    if (index >= 0 && index < list->size) {
        list->arr[index] = item;
    }
}

int reSize(myVector *list) {
    int newCapacity = 2 * list->capacity;
    int *newArr = (int*)realloc(list->arr, newCapacity * sizeof(int));
    if (newArr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    list->arr = newArr;
    list->capacity = newCapacity;
}

void insertItem(myVector *list, int index, int item) {
    if (index < 0 || index > list->size) return;
    
    if (list->size == list->capacity) {
        reSize(list);
    }

    for (int i = list->size; i > index; i--) {
        list->arr[i] = list->arr[i-1];
    }

    list->arr[index] = item;
    list->size++;
}

void removeItem (myVector *list, int index) {
    if (index < 0 || index >= list->size) return;
    
    

    for (int i = index; i < list->size - 1; i++) {
        list->arr[i] = list->arr[i+1];
    }
    list->size--;
}

int main() {
    myVector list;
    initList(&list);

    insertItem(&list, 0, 10);
    insertItem(&list, 1, 20);
    insertItem(&list, 2, 30);
    insertItem(&list, 3, 40);
    insertItem(&list, 4, 50);

    for (int i = 0; i < 5; i++) {
        printf("Array at index %i: %i\n", i, getItem(&list, i));
    }

    insertItem(&list, 0, 23);
    insertItem(&list, 6, 24);  // inserting at end

    for (int i = 0; i < 10; i++) {
        printf("Array at index %i: %i\n", i, getItem(&list, i));
    }

    removeItem(&list, 0);
    removeItem(&list, 9);

    for (int i = 0; i < 10; i++) {
        printf("Array at index %i: %i\n", i, getItem(&list, i));
    }

    free(list.arr);
    return 0;
    }
