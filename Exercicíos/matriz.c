#include <stdio.h>

int main() {
    int m[2][3];
    int linha, coluna, i;
    for (i = 0; i < 6; i++)
        scanf("%d", m[0]+1);

 for(linha = 0; linha < 2; linha++) {
    for(coluna = 0; coluna < 3; coluna++) {
        printf("%d", m[linha][coluna]);
    }
    printf("\n");
 }
}
