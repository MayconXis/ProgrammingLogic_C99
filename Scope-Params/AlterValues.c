#include <stdio.h>

int changeValue(int *a);

int main() {

    int x = 100;
    printf("After %d\n", x);
    printf("Test %d\n", changeValue(&x));
    printf("After %d\n", x);
}

int changeValue(int *a) {
    *a = *a + 10;
    return *a;
}
