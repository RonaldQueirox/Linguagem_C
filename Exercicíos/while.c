#include <stdio.h>
int main() {
    // Inicializa��o
    int i = 1;
    // Condi��o (vari�vel <= quantidade)
    while (i <= 5) {
        printf("%d\n", i);
        // Incremento
        i = i++;
    }
}
