#include <stdio.h>

void interval(int a, int x, int y, int *contIn, int *contOut);

int main() {
    int contIn = 0, conOut = 0;
    int x, y, n, teste;
    scanf("%d %d %d", &x, &y, &teste);
    for (int i = 0; i < teste; i++) {
        scanf("%d", &n);
       interval(n,x, y, &contIn, &conOut);
    }
    printf("%d in\n", contIn);
    printf("%d out\n", conOut);

    return 0;
}


void interval(int a, int interX, int interY, int *contIn, int *contOut) {
    if (a >= interX && a <= interY) {
        (*contIn)++;
    } else {
        (*contOut)++;
    }
}
