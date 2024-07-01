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

void isSorted(struct Node *p) {
    if (p==NULL) return;
    int x = p->data;
    while (p != NULL) {
        if (p->data < x) {
            printf("\nThis linked list is not sorted");
            return;
        } else {
            x=p->data;
            p=p->next;
        }
    }
    printf("\nThis linked list is sorted");
}

void removeDuplicates(struct Node *p) {
    if (p==NULL || p->next==NULL) return;
    struct Node *q = p->next;
    while (q != NULL) {
        if (p->data == q->data) {
            p->next = q->next;
            free(q);
            q=p->next;
        } else {
            p=q;
            q=q->next;
        }
    }
}

int main() {
    int A[] = {10,10,30,30,50};
    create(A,5);
    display(first);
    isSorted(first);
    removeDuplicates(first);
    printf("\nDuplicates removed:\n");
    display(first);
}