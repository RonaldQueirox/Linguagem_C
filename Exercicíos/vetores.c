#include <stdio.h>

int main() {
    int v[3], i; // cria tr�s slots na memoria
    // v[0] = 1; // come�a com 0
    // v[1] = 2;
    // v[2] = 3;
    for (i = 0; i < 3; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < 3; i++) {
        printf("%d ", v[i]);
    }
}
