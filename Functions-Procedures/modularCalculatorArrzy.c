#include <stdio.h>

int calcularSoma(int valores[], int tam);
double calcularMedia(int valores[], int tam);
int calcularMaior(int valores[], int tam);

int main() {
    int n;

    printf("Quantos números deseja inserir? ");
    scanf("%d", &n);

    int numeros[n];

    for(int i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\n--- Relatório Final ---\n");
    printf("Soma Total: %d\n", calcularSoma(numeros, n));
    printf("Média: %.2f\n", calcularMedia(numeros, n));
    printf("Maior Valor: %d\n", calcularMaior(numeros, n));

    return 0;
}


int calcularSoma(int valores[], int tam) {
    int total = 0;
    for(int i = 0; i < tam; i++) {
        total += valores[i];
    }
    return total;
}

double calcularMedia(int valores[], int tam) {
    if (tam == 0) return 0;
    return (double)calcularSoma(valores, tam) / tam;
}

int calcularMaior(int valores[], int tam) {
    int maior = valores[0];
    for(int i = 1; i < tam; i++) {
        if(valores[i] > maior) {
            maior = valores[i];
        }
    }
    return maior;
}