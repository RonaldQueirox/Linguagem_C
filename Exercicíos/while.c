#include <stdio.h>
int main() {
    // Inicialização
    int i = 1;
    // Condição (variável <= quantidade)
    while (i <= 5) {
        printf("%d\n", i);
        // Incremento
        i = i++;
    }
}
