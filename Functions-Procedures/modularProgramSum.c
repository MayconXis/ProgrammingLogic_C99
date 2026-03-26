#include <stdio.h>

int SumOfNumber(int a, int b);

void Result(int result);

int main() {
    int x, y;
    printf("Enter the numbers: ");
    scanf("%d %d", &x, &y);

    Result(SumOfNumber(x,y));
    return 0;
}


int SumOfNumber(int a, int b) {
   return a +b;
}

void Result(int result) {
    printf("Sum is: %d\n",result);
}
