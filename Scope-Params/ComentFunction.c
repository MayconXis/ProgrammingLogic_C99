#include <stdio.h>

void adicionarCinco(int *p) { *p = *p + 5; }  // nesse teste caso a função está pegando o local do valor original na memoria e adicionando 5, alterando o valor principal, e nao a copia (conhecido muito ponteiro).
void dobrarValor(int *p) { *p = *p * 2; } //nesse teste caso a função está pegando o local do valor original na memoria e multiplicando por 2, alterando o valor principal, e nao a copia (conhecido muito ponteiro).
void zerarValor(int *p) { *p = 0; } // nesse teste caso a função está pegando o local do valor original na memoria e zerando, alterando o valor principal para zero, e nao a copia (conhecido muito ponteiro).

int main() {
    int numero = 10;

    adicionarCinco(&numero);
    dobrarValor(&numero);
    // zerarValor(&numero); // se descomentar esse parte do codigo, o valor principal zerara todo os outros resultado 

    printf("Resultado final: %d\n", numero);
    return 0;
}