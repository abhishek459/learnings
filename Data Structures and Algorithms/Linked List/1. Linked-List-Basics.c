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
        printf("\n%d", p->data);
        p=p->next;
    }
}

// Display linked list elements recursively
void recursiveDisplay(struct Node *p) {
    if (p!=NULL) {
        printf("\n%d", p->data);
        recursiveDisplay(p->next);
    }
}

int main() {
    int A[] = {3,5,7,9,11};
    
    create(A,5);
    
    display(first);

    recursiveDisplay(first);
    
    return 0;
}