#include <stdio.h>

void soma_matrizes(int n, int x, int A[][x], int B[][x], int C[][x]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < x; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int n = 3;
    int x = 3;

    int A[n][x] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int B[n][x] = {{9, 8, 7},
                   {6, 5, 4},
                   {3, 2, 1}};

    int C[n][x];

    soma_matrizes(n, x, A, B, C);

    printf("A soma das matrizes é:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < x; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
