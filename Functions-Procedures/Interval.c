#include <stdio.h>
void ehPositive(float a, int *cont, float *soma);

int main() {
    float n, soma = 0.0;
    int positivos = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%f", &n);
        ehPositive(n,&positivos, &soma);
    }
    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", soma / positivos);

    return 0;
}


void ehPositive(float a, int *cont, float *soma) {
    if (a > 0) {
        (*cont)++;
        (*soma)+= a;
    }
}
