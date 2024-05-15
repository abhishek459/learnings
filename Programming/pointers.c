#include <stdio.h>

int main() {
    int a = 10;
    int *p;
    p = &a;
    
    printf("%d", a); // Prints 10
    printf("%d %d", *p, &a); // Prints 10 and Address of a
    
    *p = 20; // Modifies the data at address of variable a to 20
    printf("%d", a); // Prints 20

    return 0;
}