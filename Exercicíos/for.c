#include <stdio.h>

int main() {
    int n;
    int i;
    scanf("%d", &n);
    /*
        i++ -> i=1+1
        ++i -< i=i+1
        --i -> i=i-1
        i-- -> i=i-1
    */
    for (i = 1; i <= n; i) {
        printf("%d", &i);
    }
}
