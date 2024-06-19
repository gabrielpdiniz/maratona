#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); )

    int soma = 0;
    int numero;

    for (int i = 0; i < N; i++) {
        scanf("%d", &numero);

        if (numero == 0) {

            soma -= soma % 10;
        } else {

            soma += numero;
        }
    }

    printf("%d\n", soma);

    return 0;
}
