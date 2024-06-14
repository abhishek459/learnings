#include <stdio.h>
#include <stdlib.h>

// Declare a struct for representing a linked list
struct Node {
    int data;
    struct Node *next;
}*first = NULL;

// Create a linked list using an array of elements
void create(int A[], int n) {
    int i = 0;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0]; // You can access a struct pointer's struct data using (*first).data as well!
    first->next=NULL; // -> is used due to its easy syntax.
    last=first;
    
    for (i=1;i<n;i++) {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

// Display linked list elements iteratively
void display(struct Node *p) {
    while(p!=NULL) {
        printf("%d ", p->data);
        p=p->next;
    }
}

// Count length of a linked list iteratively
int countLength(struct Node *p) {
    int count = 0;
    while (p != NULL) {
        count++;
        p=p->next;
    }
    return count;
}

void insert(struct Node *p, int index, int value) {
    if (index < 0 || index > countLength(p)) return;
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = value;

    if (index == 0) {
        t->next = first;
        first = t;
    } else {
        for (int i = 0; i < index - 1; i++)
            p=p->next;
        t->next = p->next;
        p->next = t;
    }
}

void main() {
    int A[] = {3,5,7,9,11};
    
    create(A,5);
    printf("Linked list before:\n");
    display(first);
    
    insert(first, 0, 1);
    printf("\nInsert 1 at index 0:\n");
    display(first);

    insert(first, 3, 5);
    printf("\nInsert 5 at index 3:\n");
    display(first);

    insert(first, 7, 10);
    printf("\nInsert 10 at index 7:\n");
    display(first);
}