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

// Create linkedlist and return its pointer
struct Node * createDynamically(int A[], int n) {
    int i = 0;
    struct Node *p,*t,*last;
    p=(struct Node *)malloc(sizeof(struct Node));
    p->data=A[0]; // You can access a struct pointer's struct data using (*p).data as well!
    p->next=NULL; // -> is used due to its easy syntax.
    last=p;
    
    for (i=1;i<n;i++) {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

    return p;
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

void reverse(struct Node *p) {
    struct Node *q=NULL, *r=NULL;
    while (p!=NULL) {
        r=q; // Slide the pointers
        q=p; // Slide the pointers
        p=p->next; // Slide the pointers
        q->next=r; // Assign the mid pointer to its previous pointer
    } // Repeat the above process until the end of linked list
    first=q;
}

void reverseRecursively(struct Node *q, struct Node *p) {
    if (p!=NULL) {
        reverseRecursively(p,p->next);
        p->next=q;
    } else {
        first = q;
    }
}

struct Node * concatenate(struct Node *p, struct Node *q) {
    struct Node *third = p;
    while (p->next != NULL) {
        p=p->next;
    }
    p->next = q;
    printf("\nConcatenated linked lists\n");
    display(third);
}

int main() {
    int A[] = {10,20,30,40,50};
    create(A,5);
    display(first);
    isSorted(first);
    
    removeDuplicates(first);

    printf("\nDuplicates removed:\n");
    display(first);

    printf("\nReversing a linked list\n");
    reverse(first);
    display(first);

    printf("\nReversing a linked list recursively\n");
    reverseRecursively(NULL, first);
    display(first);
    
    int B[] = {1,2,3,4,5};
    struct Node *second = createDynamically(B, 5);
    printf("\nSecond Linked List\n");
    display(second);
    
    concatenate(first, second);
}