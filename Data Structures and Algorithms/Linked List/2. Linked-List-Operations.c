include <stdio.h>

// Declare a struct for representing a linked list
struct Node {
    int data;
    struct Node *next;
}*first = NULL;

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
        return calculateSum(p->next) + p->data;
    } else {
        return 0;
    }
}