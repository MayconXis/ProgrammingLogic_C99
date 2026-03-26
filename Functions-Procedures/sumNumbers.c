#include <stdio.h>
int SumOfNumber(int a, int b);

int main() {
    int x,y;
    printf("Enter the numbers: ");
    scanf("%d %d",&x, &y);

    SumOfNumber(x,y);
    return 0;
}


int SumOfNumber(int a, int b) {
    int sum = a + b;
    printf("Sum is: %d\n", sum);
    return sum;
}