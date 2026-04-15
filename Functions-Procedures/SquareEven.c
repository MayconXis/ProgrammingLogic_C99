#include <stdio.h>
int square(int a);

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        printf("%d^2 = %d\n", i, square(i));
    }
        return 0;
}

int square(int a ) {
    return a * a;
}