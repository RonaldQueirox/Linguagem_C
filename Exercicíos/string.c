#include <stdio.h>

int main() {
    char n1[10], n2[10];
    scanf("%S %s", n1, n2);
    if(n1 == n2) {
        printf("Igual\n");
    }else {
        printf("Diferentes\n");
    }
}
