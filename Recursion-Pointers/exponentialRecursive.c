#include <stdio.h>
int exponential(int x,int y);

int main() {
    int nExpoente,nBase;
    scanf("%d %d", &nBase,&nExpoente);
    printf("Exponential is: %d\n", exponential(nBase,nExpoente));
    return 0;
}

int exponential(int x, int y) {
    if (y == 0) {
        return 1;
    }
    return x * exponential(x , (y - 1));
}
