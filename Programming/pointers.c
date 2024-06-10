#include <stdio.h>
#include <stdlib.h>

int main() {
    // Pointer declaration and dereferencing
    int a = 10;
    int *p;
    p = &a;
    
    printf("%d", a); // Prints 10
    printf("%d %d", *p, &a); // Prints 10 and Address of a
    
    *p = 20; // Modifies the data at address of variable a to 20
    printf("%d", a); // Prints 20

    // Array Pointer Declaration with Array in Stack
    int A[5] = {2,4,6,8,10};
    int *p2;
    p2 = A; // This can also be declared as p2 = &A[0]

    for (int i = 0; i < 5; i++) {
        printf("\n%d", *p2[i]);
    }

    // Array Pointer Declaration with Array in Heap
    int *p3;
    p3 = (int *)malloc(5 * sizeof(int)); // p3 = new int[5]; in C++
    p3[0] = 10; p3[1] = 20; p3[2] = 30; p3[3] = 40; p3[4] = 50;

    for (int i = 0; i < 5; i++) {
        printf("\n%d", p3[i]);
    }

    return 0;
}