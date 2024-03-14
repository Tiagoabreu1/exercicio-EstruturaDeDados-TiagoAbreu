#include <stdio.h>

int calcularFat(int n) {
    int resultado = 1;
    for (int x = 2; x < n + 1; x++) {
        resultado = resultado * x;
    }
    return resultado;
}

int main() {
    int n;
    printf("Digite o numero que você deseja calcular o fatorial: ");
    scanf("%d", &n);
    printf("O fatoral do número é: %d", calcularFat(n));
    return 0;
}