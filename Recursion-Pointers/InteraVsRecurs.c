#include <stdio.h>

int factorialRecursive(int n);
int factorialInteractive(int n);


int main() {
    int x;
    scanf("%d", &x);

    printf("Factorial Recursive : %d\n", factorialRecursive(x));
    printf("Factorial Interative: %d\n", factorialRecursive(x));


    return 0;
}


int factorialRecursive(int n) { //usado para simplificar a solução do problema, porém pode ser mais lenta que a interativa por conta dela fazer varias copias dela mesma;
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int factorialInteractive(int n) { // já a interativa ela chama a função apenas uma vez, e só interropendo quando o problema for resolvido, não fazendo nenhuma copia;
    for (int i = 1; i <= n; i++) {
        n *= i;
    }
    return n;

}
