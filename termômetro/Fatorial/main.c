#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i;
    long long fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        fatorial = fatorial * i;
    }

    printf("O fatorial de %d e %lld\n", N, fatorial);

    return 0;
}
