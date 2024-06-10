#include <stdio.h>

int main() {
    int a = 10;
    int *p;
    p = &a;
    
    printf("%d", a); // Prints 10
    printf("%d %d", *p, &a); // Prints 10 and Address of a
    
    *p = 20; // Modifies the data at address of variable a to 20
    printf("%d", a); // Prints 20

    int A[5] = {2,4,6,8,10};
    int *p2;
    p2 = A; // This can also be declared as p2 = &A[0]

    for (int i = 0; i < 5; i++) {
        printf("\n%d", *p2[i]);
    }

    return 0;
}