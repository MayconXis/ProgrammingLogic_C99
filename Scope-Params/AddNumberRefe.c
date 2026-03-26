#include <stdio.h>
int AddNumber(int *a);

int main() {
    int x = 10;
    AddNumber(&x);
    printf("Before test : %d\n", x);
    return 0;
}

int AddNumber(int *a) {
    *a = *a + 1;
    printf("Sum is: %d\n", *a);
    return *a;
}