#include <stdio.h>
int rest2(int i, int x);


int main() {
    int x;
    scanf("%d", &x);

    for (int i = 0; i < 10000; i++) {
        if (rest2(i, x)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
int rest2(int i, int x) {
    return i % x == 2;
}
