#include <stdio.h>
#include <stdlib.h>

int* inserirPosicao(int *arr, int n, int pos, int valor) {
    arr = realloc(arr, (n + 1) * sizeof(int)); // Redimensiona o vetor
    if (arr == NULL) {
        printf("Erro na alocação de memória\n");
        exit(1);
    }

    // Move os elementos após a posição para a direita
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = valor; // Insere o novo valor na posição especificada
    return arr;
}

int main() {
    int n = 5;
    int *arr = malloc(n * sizeof(int));
    arr[0] = 10; arr[1] = 20; arr[2] = 30; arr[3] = 40; arr[4] = 50;

    int valor = 25, pos = 2;
    arr = inserirPosicao(arr, n, pos, valor);
    n++;

    printf("Vetor após inserção: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    return 0;
}