#include <stdio.h>
double averageGrades(double a, double b,double c);

int main() {
    double nota1,nota2,nota3;
    printf("Enter the numbers: ");
    scanf("%lf %lf %lf",&nota1, &nota2,&nota3);

    averageGrades(nota1,nota2,nota3);
    return 0;
}


double averageGrades(double a, double b,double c){
    double average = (a + b + c) / 3.0;
    if (average >= 6.0) {
        printf("Student Approved");
    } else {
        printf("Student failed");
    }

    return average;
}