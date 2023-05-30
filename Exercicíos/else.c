#include <stdio.h>
/*
    Dado uma méda x,
    imprima se o aluno está aprovado ou
    reprovado.
*/
int main() {
    float media;
    scanf("%f", &media);
    if(media >= 7.0) {
        printf("Aprovado\n");
    }
    else {
        printf("Não aprovado\n");
    }
}
