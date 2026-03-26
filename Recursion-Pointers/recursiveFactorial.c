#include <stdio.h>

int factorial(int n);


int main() {
    int x;
    scanf("%d", &x);

    printf("Factorial : %d\n", factorial(x));

    return 0;
}


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
