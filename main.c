
#include "menu.h" 

int main(int argc, char** argv) {

    printf("CURSO: CIÊNCIA DA COMPUTAÇÃO\n");
    delay(1000); //espera 2 segundos

    printf("DISCIPLINA: TÉCNICAS DE PROGRAMAÇÃO\n");
    delay(1000); //espera 2 segundos

    printf("ATIVIDADE: 1\n");
    delay(1000); //espera 2 segundos

    printf("ALUNO: LÚCIO FLÁVIO LEMOS\n");
    delay(1000); //espera 2 segundos

    printf("MATRÍCULA: 2019204050\n");
    delay(1000); //espera 2 segundos
    clrscr();

    float A1, A2, A3, A4, N1;
    printf("Digite a Nota da Atividade 1: ");
    scanf("%f", &A1);

    printf("Digite a Nota da Atividade 2: ");
    scanf("%f", &A2);

    printf("Digite a Nota da Atividade 3: ");
    scanf("%f", &A3);

    printf("Digite a Nota da Atividade 4: ");
    scanf("%f", &A4);
    clrscr();

    printf("As notas declaradas foram %.2f, %.2f, %.2f e %.2f\n", A1, A2, A3, A4);
    N1 = (A1 + A2 + A3 + A4) / 4;
    if (N1 >= 6) {
        printf("Nota N1 do aluno: %.2f\n", N1);
        printf("Aluno aprovado!\n");
    } else {
        printf("Nota N1 do aluno: %.2f\n", N1);
        printf("Aluno Reprovado!\n");
    }

    return (EXIT_SUCCESS);
}

