#include <stdio.h>

int calcularRestoDivisao(int n1, int n2) {
    while (n1 >= n2) {
        n1 = n1 - n2;
    }
    return n1;
}

int main() {
    int n1, n2;
    printf("Escreva o dividendo: ");
    scanf("%d", &n1);
    printf("Escreva o divisor: ");
    scanf("%d", &n2);
    printf("O resto da divisão de %d por %d é igual a %d", n1, n2, calcularRestoDivisao(n1,n2));
    return 0;
}
