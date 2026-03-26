#include <stdio.h>

void function();
int cont = 0;

int main() {
    function();
    function();
    function();
    function();
    printf("Function call count: %d\n", cont);
    return 0;
}


void function() {
   cont ++;
}
