#include <stdio.h>

int main() {
    int n, quantia, total = 0;
    int coelhos = 0, ratos = 0, sapos = 0;
    char tipo;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %c", &quantia, &tipo);
        total += quantia;

        if (tipo == 'C') {
            coelhos += quantia;
        } else if (tipo == 'R') {
            ratos += quantia;
        } else if (tipo == 'S') {
            sapos += quantia;
        }
    }

    double p_coelhos = (coelhos * 100.0) / total;
    double p_ratos = (ratos * 100.0) / total;
    double p_sapos = (sapos * 100.0) / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", p_coelhos);
    printf("Percentual de ratos: %.2f %%\n", p_ratos);
    printf("Percentual de sapos: %.2f %%\n", p_sapos);

    return 0;
}