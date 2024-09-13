#include <stdio.h>
#include <stdlib.h>


int* inserirFinal(int *arr, int n, int valor) {
arr = realloc(arr, (n + 1) * sizeof(int)); // Redimensiona o vetor
if (arr== NULL) {
printf("Erro na alocação de memória\n");
exit(1);
}
arr[n] = valor; // Adiciona o novo valor no final
return arr;
}

int main() {
int n = 5;
int *arr = malloc(n * sizeof(int));
arr[0] = 10; 
arr[1] = 20; 
arr[2] = 30; 
arr[3] = 40; 
arr[4] = 50;
int valor = 60;


arr = inserirFinal(arr, n, valor);
n++;
printf("Vetor após inserção: ");
for (int i = 0; i < n; i++) {
printf("%d", arr[i]);
}
free(arr);
return 0;
}
