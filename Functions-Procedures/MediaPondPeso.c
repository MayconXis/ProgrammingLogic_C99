#include <stdio.h>

double average(double a, double b, double c);




int main() {
    int x;
    scanf("%d", &x);
    double n1, n2, n3;


    for (int i = 0; i < x; i++) {
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        printf("%.1lf\n", average(n1, n2, n3));
    }
    return 0;
}


double average(double a, double b, double c) {
    return ((a * 0.2) + (b * 0.3) + (c * 0.5)) ;
}
