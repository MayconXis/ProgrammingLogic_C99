#include <stdio.h>

int main() {
    int condicao = 1;

    if (condicao) {
        int variavelDeBloco = 100;
        printf("Dentro do IF: %d\n", variavelDeBloco);
    } 
    // Aqui a chave fecha e a 'variavelDeBloco' é destruída da memória.

    // SE DESCOMENTAR A LINHA ABAIXO, O CÓDIGO NÃO COMPILA:
    // printf("Tentando acessar fora: %d\n", variavelDeBloco); 

    return 0;
}