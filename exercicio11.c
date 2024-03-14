#include <stdio.h>

int calcularProduto(int n1, int n2){
    int produto = 0;
    for (int x = 1; x <= n2; x++) {
        produto = produto + n1;
    }
    return produto;
}

int main() {
    int n1, n2;
    printf("Digite qual será o multiplicando: ");
    scanf("%d", &n1);
    printf("Digite qual será o multiplicador: ");
    scanf("%d", &n2);
    printf("O produto da multiplicação de %d por %d é igual a %d", n1, n2, calcularProduto(n1,n2));
    return 0;
}