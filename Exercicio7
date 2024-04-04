#include <stdio.h>

void multiplicar_matrizes(int n, int m, int p, int A[][m], int B[][p], int C[][p]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int x = 0; x < m; x++) {
                C[i][j] += A[i][x] * B[x][j];
            }
        }
    }
}

int main() {
    int n = 2;
    int m = 3;
    int p = 2;

    int A[n][m] = {{1, 2, 3},
                   {4, 5, 6}};
    int B[m][p] = {{7, 8},
                   {9, 10},
                   {11, 12}};

    int C[n][p];

    multiplicar_matrizes(n, m, p, A, B, C);

    printf("A multiplicacao das matrizes é:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
