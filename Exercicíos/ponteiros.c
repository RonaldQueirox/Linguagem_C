#include <stdio.h>

int main() {
    printf("int = %d\n", sizeof(int));
    printf("float = %d\n", sizeof(float));
    printf("double = %d\n", sizeof(double));
    printf("char = %d\n", sizeof(char));
    int *p;
    int x;
    p = &x;
    printf("%x\n", p);
    printf("%x\n", p+1);
    printf("%x\n", p+2);
    printf("%x\n", p+3);
}
