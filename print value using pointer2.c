#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;  // store address of a in pointer p

    printf("Value of a = %d\n", a);
    printf("Value using pointer = %d\n", *p);

    return 0;
}
