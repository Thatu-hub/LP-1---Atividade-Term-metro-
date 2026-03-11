#include <stdio.h>
#include <stdlib.h>

int main() {

    char texto[500];
    int i = 0, contador = 0;

    printf("Digite uma frase: ");
    fgets(texto, 500, stdin);

    while(texto[i] != '\0') {
        contador++;
        i++;
    }

    printf("Quantidade de caracteres: %d\n", contador);

    return 0;
}
