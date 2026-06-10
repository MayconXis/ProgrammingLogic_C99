#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matricula;
    double nota1;
    double nota2;
    double media;
}Aluno;


int main() {
    Aluno aluno[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter the student's %d name: " , i + 1);
        scanf(" %[^\n]", aluno[i].nome);
        printf("Enter the student's %d registration: ",i + 1);
        scanf("%d", &aluno[i].matricula);
        printf("Enter the first grade: ");
        scanf("%lf", &aluno[i].nota1);
        printf("Enter the second grade: ");
        scanf("%lf", &aluno[i].nota2);
        printf("\n");

    }


    for (int i = 0; i < 5; i++) {
        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2) / 2.0;

        printf("--- STUDENT %d REPORT ---\n", i + 1);
        printf("Registration: %d\n", aluno[i].matricula);
        printf("Student Name: %s\n", aluno[i].nome);
        printf("First Grade:  %.2lf\n", aluno[i].nota1);
        printf("Second Grade: %.2lf\n", aluno[i].nota2);
        printf("Final Average: %.2lf\n\n", aluno[i].media);
    }

    return 0;

}