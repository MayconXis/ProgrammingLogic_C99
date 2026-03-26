#include <stdio.h>
int cont(int a);

int main() {
    int n ;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Counting is : %d\n", cont(n));
    return 0;
}

int cont(int a) {
    if (a == 0) {
        return 1;
    }
    return  1 + cont (a - 1);
}