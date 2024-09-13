#include <stdio.h>
#include <stdlib.h>

int buscaLinear(int *arr, int n, int valor) {
for (int i = 0; i < n; i++) {
if (arr[i] == valor)
return i; // Retorna o índice se o valor for encontrado
} 
return -1; // Retorna -1 se o valor não for encontrado
}


int main() {
int n = 5;
int *arr = malloc(n * sizeof(int));
arr[0] = 10; 
arr[1] = 20; 
arr[2] = 30;
arr[3] = 40;
arr[4] = 50;
int valor = 30;
int indice = buscaLinear(arr, n, valor);
if (indice != -1)
printf("Valor encontrado no índice %d\n", indice);
else
printf("Valor não encontrado\n");
free(arr); return 0;
}