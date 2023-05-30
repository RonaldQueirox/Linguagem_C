#include <stdio.h>
int main() {
    /*
        continue = vai para a próxima in
            interação
        break = Termina um laço de repetição
    */
    int i;
    for(i = 0; i < 6; i++) {
        if(i == 2) {
            break;
        }
        printf("%d\n", i);
    }
}
