#include <stdio.h>

int main() {
    char A[100], B[100];

    while (scanf(" %[^\n]", A) != EOF) {
        scanf(" %[^\n]", B);

        int max = 0;

        for (int i = 0; A[i] != '\0'; i++) {
            for (int j = 0; B[j] != '\0'; j++) {

                int k = 0;

                while (A[i + k] == B[j + k] && A[i + k] != '\0' && B[j + k] != '\0') {
                    k++;
                }

                if (k > max) {
                    max = k;
                }
            }
        }

        printf("%d\n", max);
    }

    return 0;
}