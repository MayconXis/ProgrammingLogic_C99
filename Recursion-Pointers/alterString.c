#include <stdio.h>

int main() {
    char text[]  = "Yancom";
    char *p = text; // mudança por ponteiro, aqui *p recebe text[0], no local da memoria

    printf("Before: %s\n", text);

    *p = 'M'; // mudança por ponteiro
    *(p + 2) = 'y';
    *(p + 5) = 'n';

    printf("After: %s\n", text);

    /////////////////////////////////////////////////////////////
    // por valor agora;

    char textValor[]  = "Yancom";

    printf("Before for Value: %s\n", textValor);

    textValor[0] = 'M'; // mudança por valor
    textValor[2] = 'y';
    textValor[5] = 'n';


    printf("After for Value: %s\n", textValor);

    return 0;
}