#include <stdio.h>
#include <stdlib.h>

int INT32_MIN = -32768;

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

// Count length of a linked list recursively
int countLengthRecursively(struct Node *p) {
    if (p == NULL) {
        return 0;
    } else {
        return countLengthRecursively(p->next) + 1;
    }
}

// Count the sum of elements in a linked list iteratively
int calculateSum(struct Node *p) {
    int sum = 0;

    while (p != NULL) {
        sum = sum + p->data;
        p = p->next;
    }

    return sum;
}

// Count the sum of elements in a linked list recursively
int calculateSumRecursively(struct Node *p) {
    if (p != NULL) {
        return calculateSumRecursively(p->next) + p->data;
    } else {
        return 0;
    }
}

// Get the max element in a linked list iteratively
int max(struct Node *p) {
    int max=INT32_MIN;

    while(p) {
        if (p->data > max)
            max = p->data;
        p=p->next;
    }

    return max;
}

// Get the max element in a linked list recursively
int maxRecursive(struct Node *p) {
    int x = 0;
    if (p==NULL) {
        return INT32_MIN;
    } else {
        x = maxRecursive(p->next);
        if (x>p->data)
            return x;
        return p->data;
    }
}

struct Node* linearSearch(struct Node *p, int number) {
    while (p) {
        if (p->data == number)
            return p;
        p=p->next;
    }
    return NULL;
}

struct Node* linearSearchRecursive(struct Node *p, int number) {
    if (p==NULL) {
        return NULL;
    } else {
        if (p->data == number) {
            return p;
        } else {
            return linearSearchRecursive(p->next, number);
        }
    }
}

struct Node* linearSearchWithMoveToHead(struct Node *p, int number) {
    struct Node *q;
    while (p != NULL) {
        if (p->data == number) {
            q->next = p->next;
            p->next = first;
            first=p;
        }
        q=p;
        p=p->next;
    }
}

void main() {
    int A[] = {3,5,7,9,11};
    
    create(A,5);
    display(first);

    printf("\nLinked List Operations:\n");
    printf("Count of elements iteratively: %d\n", countLength(first));
    printf("Count of elements recursively: %d\n", countLengthRecursively(first));
    printf("Sum of all the elements in iteratively: %d\n", calculateSum(first));
    printf("Sum of all the elements in recursively: %d\n", calculateSumRecursively(first));
    printf("Max element iteratively: %d\n", max(first));
    printf("Max element recursively: %d\n", maxRecursive(first));
    printf("Linear search iteratively: %d\n", linearSearch(first, 11));
    printf("Linear search recursively: %d\n", linearSearchRecursive(first, 11));
    printf("Linear search with move to head: %d\n", linearSearchWithMoveToHead(first, 11));
}