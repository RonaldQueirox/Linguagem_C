#include <stdio.h>
int main() {
    /*
        continue = vai para a pr�xima in
            intera��o
        break = Termina um la�o de repeti��o
    */
    int i;
    for(i = 0; i < 6; i++) {
        if(i == 2) {
            break;
        }
        printf("%d\n", i);
    }
}
