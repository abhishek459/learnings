// When deleting a node, it must be deallocated from the memory.
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

int delete(struct Node *p, int index) {
    if (index < 1 || index > countLength(p)) return -1;

    struct Node *q=NULL;
    int x = -1, i;

    if (index == 1) {
        q = first; // Store first's address to delete it later
        x = first->data;
        first = first->next; // Point first to the next node of the first node as this one will be deleted
        free(q);
        return x;
    } else {
        for (i=0;i<index-1;i++) {
            q=p;
            p=p->next;
        }
        q->next = p->next; // Set previous node's next value to current node's next value
        x = p->data; // Extract data from the node that is to be deleted
        free(p);
        return x;
    }
}

int main() {
    int A[] = {10,20,30,40,50};
    create(A,5);
    display(first);
    printf("\nDeleted element is %d", delete(first, 3));
    printf("\n");
    display(first);
}