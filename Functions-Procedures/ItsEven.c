#include <stdio.h>
void itsEven(int a, int *cont);


int main() {
    int n;
    int pares = 0;
    for (int i = 0; i < 5 ; i++) {
        scanf("%d", &n);
        itsEven(n,&pares);
    }
    printf("%d even values\n", pares);
    return 0;
}


void itsEven(int a, int *cont) {
    if (a % 2 == 0) {
        (*cont)++;
    }
}
