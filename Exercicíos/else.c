#include <stdio.h>
/*
    Dado uma m�da x,
    imprima se o aluno est� aprovado ou
    reprovado.
*/
int main() {
    float media;
    scanf("%f", &media);
    if(media >= 7.0) {
        printf("Aprovado\n");
    }
    else {
        printf("N�o aprovado\n");
    }
}
