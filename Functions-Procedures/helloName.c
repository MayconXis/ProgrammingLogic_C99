#include <stdio.h>

void Name(char a[30]);

int main() {
    char x[30];
    printf("Enter a name: ");
    scanf("%s", x);

    Name(x);
    return 0;
}


void Name(char a[30]) {
    printf("Hello %s\n", a);
}
