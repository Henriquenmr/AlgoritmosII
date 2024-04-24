#include <stdio.h>
#include <stdbool.h>

int divisiveis(int arr[], int tam, int x) {
    if (tam == 0) {
        return 0; // Se o tamanho for 0, a soma é 0
    } else {
        int soma = divisiveis(arr, tam - 1, x);
        int resto = arr[tam - 1] % x;
        if (resto == 0) {
            soma += arr[tam - 1]; // Se divisível, adiciona o valor ao soma
        }
        return soma;
    }
}

void mostrar(int arr[], int tam) {
    printf("[ ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main() {
    int array[] = {21, 27, 33, 60};
    int n = sizeof(array) / sizeof(array[0]);
    mostrar(array, n);
    printf("x: ");
    int x;
    if (scanf("%d", &x) != 1) {
        return 1;
    }
    int soma_divisiveis = divisiveis(array, n, x);
    printf("Soma dos números divisíveis por %d: %d\n", x, soma_divisiveis);
    return 0;
}
