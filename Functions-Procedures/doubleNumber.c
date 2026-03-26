#include <stdio.h>
int DoubleofNumber(int a);

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    DoubleofNumber(x);
    return 0;
}


int DoubleofNumber(int a) {
    a = (a) * 2;
    printf("Double is: %d\n", a);
    return a;
}