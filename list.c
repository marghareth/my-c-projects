#include <stdio.h>
struct LinkedList { 
    int data;
    struct LinkedList *next; //the struct linkedlist is written before next, because is a self-referencing pointer.
};

typedef struct LinkedList *node; //define node as pointer of 

node createNode() {
    node temp;  
    temp = (node)malloc(sizeof(struct LinkedList)); //allocate memory using malloc()
    temp->next = NULL;
    return temp; //return the new node
}   
//adding a node to the linked list
node addNode(node head, int value) {
    node temp, p; //declare two nodes temp and p
    temp = createNode(); //createNode will return a new node with data = value and next pointing to NULL
    temp ->data = value; //add element's value to data part of code
    if(head == NULL) {
        head = temp; //when linked list is empty
    }
    else {
        p = head; //assigned head to p
        while(p->next != NULL) {
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}
int main() {
    //a linked list is a way to store a collection of elements. Like an array, these can be character or integers.
    //each element in a linked list is stored in the form of a node
    //a node is a collection of two sub-elements or parts.
    //a data part that stores the element and a next part that stores the link to the next node
    //like arrays, linked list is a linear data structure, unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers

    //the size of the arrays is fixed, thus we must know the upper limit on the number of elements in advance
    //advantages over arrays
    //dynamic size & ease of insertion / deletion

    //drawbacks
    //random access is not allowed. We have to access elements sequentially starting from the first node.
    //extra memory spae for a pointer is required with each element of the list
    //not cache friendly. since array elements are contiguous locations, there is locality of reference which is not
    //there in case of linked lists
    //a linked list is formed when many such nodes are linked together to form a chain
    //the first node is always used as a reference to transverse the list
    //the last node points to NULL
    // a linked list can be implemented using structure and pointers
    
    return 0;
}