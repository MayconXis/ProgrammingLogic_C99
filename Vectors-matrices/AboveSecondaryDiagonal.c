#include <stdio.h>


#define TAM 12

int main() {
    double matriz[TAM][TAM];
    double soma = 0.0;
    int cont = 0;
    char escolha;
    scanf("%c", &escolha);
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }


    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if ( i + j > 11) {
                soma += matriz[i][j];
                cont++;
            }
        }
    }
    if (escolha == 'M') {
        double media = soma / cont;
        printf("%.1f\n", media);
    } else {
        printf("%.1f\n", soma);
    }
    return 0;
}
