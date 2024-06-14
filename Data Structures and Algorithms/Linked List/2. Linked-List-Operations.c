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