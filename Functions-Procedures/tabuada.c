#include <stdio.h>

int weightedAverages(int a, int b, int c, int d);


int main() {
    int x;
    scanf("%d", &x);
    float nota[3];


    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            scanf("%d", &nota[j]);
        }
        printf("%d\n", weightedAverages(nota[0], nota[1], nota[3], x));
    }
    return 0;
}

int weightedAverages(int a, int b, int c, int d) {
    return (a + b + c) / d;
}
