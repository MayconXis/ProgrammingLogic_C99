#include <stdio.h>
int EvenOrOdd(int a);

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if (EvenOrOdd(x)) {
        printf("It's Even");
    } else {
        printf("It's Odd");
    }
    return 0;
}


int EvenOrOdd(int a) {
    if (a % 2 == 0) {
        return 1;
    }
    return 0;
}
