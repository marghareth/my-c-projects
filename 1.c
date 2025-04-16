#include <stdio.h>
#include <stdlib.h>

struct myList {
    int size;
    int arr[20];
};

typedef struct myList myList;

void initList(myList *list) {
    list->size = 0;
    
    for (int i = 0; i < 20; i++) {
        list-> arr[i] = -1 ;
    }
}

int getItem(myList *list, int index) {
    if (index >= 0 && index <= list->size) {
        return list->arr[index];
    }
    return -1;
}

void setItem(myList *list, int index, int item) {
    if (index >= 0 && index < list->size) {
        list->arr[index] = item;
    }
    return; //invalid index, do nothing
}

void insertItem(myList *list, int index, int item) {
    if (list->size == 20 || index < 0 || index > list->size) 
    return;

    for (int i = list->size; i > index; i--) {
        list->arr[i] = list->arr[i-1];
    }
        list->arr[index] = item;
        list->size++;
}

void removeItem(myList *list, int index) {
    if (index < 0 || index >= list->size) 
    return;
    
    for(int i = index; i < list->size - 1; i++) {
        list->arr[i] = list->arr[i+1];
        }

        list->size--;
    }

int main() {
    myList list;
    initList(&list);

    insertItem(&list, 0, 10);
    insertItem(&list, 1, 20);
    insertItem(&list, 2, 30);
   
    printf("Item at index 1: %d\n", getItem(&list,1));
   
    setItem(&list, 1 , 25);
    printf("Item at index 1 after update: %d\n", getItem(&list,1));
   
    removeItem(&list, 1);
    printf("Item at index 1 after removal: %d\n", getItem(&list,1));

    return 0;
}