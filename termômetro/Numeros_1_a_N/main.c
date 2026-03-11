#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}
