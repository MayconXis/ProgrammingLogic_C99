#include <stdio.h>

int sum(int n);


int main() {
    int x;
    scanf("%d", &x);

    printf("Sum is : %d\n", sum(x));

    return 0;
}


int sum(int n) {
    if ( n == 1) {
        return 1;
    }
    return n + sum(n - 1);
}


