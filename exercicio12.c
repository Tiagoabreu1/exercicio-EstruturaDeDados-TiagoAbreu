#include <stdio.h>

int pred(int n) {
    int predN = n - 1;
    return predN;
}

int suc(int n) {
    int sucN = n + 1;
    return sucN;
}

int somaNumero(int n1, int n2) {
    int soma = n1 + n2;
    return soma;
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("A soma do sucessor e do antecessor de %d é %d\n", n, somaNumero(suc(n), pred(n)));
    return 0;
}