#include <stdio.h>

int troca(int *a, int *b) {
    int aux = a;
    *a = *b;
    *b = aux;
    printf("dentro d %d\n", a, b);
}

int main() {
    int a = 1;
    int b = 2;
    troca(&a, &b);
    printf("%d %d\n", a, b);
}
