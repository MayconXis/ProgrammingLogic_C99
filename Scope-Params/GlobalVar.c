#include <stdio.h>
int globalVar = 50;

void test();

int main() {
    int globalVar = 10;
    printf("Local variable value is: %d\n", globalVar);
    test();
    return 0;
}

void test() {
    printf("Global variable value is: %d\n", globalVar);
}
