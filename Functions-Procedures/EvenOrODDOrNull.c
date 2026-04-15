#include <stdio.h>

void EvenOddNull(int a);

int main() {
    int testes, n;
    scanf("%d", &testes);
    for (int i = 0; i < testes; i++) {
        scanf("%d", &n);
       EvenOddNull(n);
    }
    return 0;
}

void EvenOddNull(int a) {
    if (a == 0) {
        printf("NULL\n");
    }

    if (a % 2 == 0 && a > 0) {
        printf("EVEN POSITIVE\n");
    } else if (a % 2 == 0 && a < 0) {
        printf("EVEN NEGATIVE\n");
    }

    if (a % 2 != 0 && a > 0) {
        printf("ODD POSITIVE\n");
    } else if (a % 2 != 0 && a < 0) {
        printf("ODD NEGATIVE\n");
    }
}
