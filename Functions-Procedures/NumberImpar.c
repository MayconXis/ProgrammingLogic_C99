#include <stdio.h>

void itsImpar(int a);


int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        itsImpar(i);
    }
    return 0;
}


void itsImpar(int a) {
    if (a % 2 != 0) {
        printf("%d\n",a);
    }
}