#include <stdio.h>

int main() {
    float media;
    scanf("%f", &media);

    if(media >= 7.0) {
        printf("Aprovado\n");
    }
    else if (media < 4.0) {
        printf("Reprovado\n");
    }
    else {
        printf("Avaliação Final\n");
    }
}
