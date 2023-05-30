#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    printf("Digite a PRIMEIRA nota: ");
    scanf("%f", &nota1);
    printf("Digite a SEGUNDA nota: ");
    scanf("%f", &nota2);
    printf("Digite a TERCEIRA nota: ");
    scanf("%f", &nota3);
    printf("A media = %f\n", (nota1 + nota2 + nota3) /3);
}
