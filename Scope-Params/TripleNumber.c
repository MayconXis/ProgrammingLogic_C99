#include <stdio.h>
int TripleNUmber(int a);

int main() {
    int x = 10;
    TripleNUmber(x);
    return 0;
}


int TripleNUmber(int a) {
    int sum = a * 3;
    printf("Sum is: %d\n", sum);
    return sum;
}