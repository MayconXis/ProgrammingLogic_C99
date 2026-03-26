#include <stdio.h>
void test(int *x, int *y);

int main() {
    int var = 100;
    int var2 = 100;
    printf("Before var : %d\n", var);
    printf("Before var2 : %d\n", var2);

    test(&var,&var2);
    printf("Before Test var :%d\n", var);
    printf("Before Teste var 2: %d\n", var2);
    return 0;
}


void test(int *x, int *y) {
    *x = *x + 10;
    *y = *y + *x;
    printf("During Test var : %d \n",*x);
    printf("During Test var2 : %d\n",*y);

}

