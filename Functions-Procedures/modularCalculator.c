#include <stdio.h>

double SumOfNumbers(double a, double b);
double AverageOfNumbers(double a, double b);
double GreaterValue(double a, double b);

int main() {
    double x, y;
    printf("Enter the numbers: ");
    scanf("%lf %lf", &x, &y);

    printf("Sum is: %.1f\n", SumOfNumbers(x, y));
    printf("Average is: %.1f\n", AverageOfNumbers(x, y));

    double maior = GreaterValue(x, y);
    if (x == y) {
        printf("The numbers are equal.\n");
    } else {
        printf("The Greater is: %.1f\n", maior);
    }

    return 0;
}

double SumOfNumbers(double a, double b) {
    return a + b;
}

double AverageOfNumbers(double a, double b) {
    return (a + b) / 2.0;
}

double GreaterValue(double a, double b) {
    if (a > b) return a;
    return b;
}