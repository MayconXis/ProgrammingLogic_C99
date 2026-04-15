#include <stdio.h>

int main() {
    int i = 1, j = 7;

    while (i <= 9) {
        j = 7;
        for (int x = 0; x < 3; x++) {
            printf("I=%d J=%d\n", i, j);
            j -= 1;
        }

        i += 2;

    }
    return 0;
}