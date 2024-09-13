#include <stdio.h>
#include <stdlib.h>

int* removerPosicao(int *arr, int n, int pos) {
    // Move os elementos após a posição para a esquerda
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr = realloc(arr, (n - 1) * sizeof(int)); // Redimensiona o vetor
    if (arr == NULL && n > 1) {
        printf("Erro na alocação de memória\n");
        exit(1);
    }

    return arr;
}

int main() {
    int n = 5;
    int *arr = malloc(n * sizeof(int));
    arr[0] = 10; arr[1] = 20; arr[2] = 30; arr[3] = 40; arr[4] = 50;

    int pos = 2;
    arr = removerPosicao(arr, n, pos);
    n--;

    printf("Vetor após remoção: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
