#include <stdio.h>
int fibonnaci(int a);

int main() {
    int n;
    scanf("%i", &n);
    printf("%d\n",fibonnaci(n));
    return 0;
}

int fibonnaci(int a) {
   if (a <= 1) {
      return a;
   }
    return fibonnaci(a -1) + fibonnaci((a - 2));
}