#include <stdio.h>

int main() {
    /*
        < Menor
        > Maior
        <= Menor ou igual
        >= Maior ou igual
        == Igual
        != Diferente

        Verdade tem valor 1
        Falso tem valor 0
    */
    int a;
    scanf("%d", &a);
    if(a%2 == 0) {
        printf("par\n")
    }
    if (a%2 != 0) {
        printf("Impar\n")
    }
}
