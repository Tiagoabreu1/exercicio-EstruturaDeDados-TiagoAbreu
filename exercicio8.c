#include <stdio.h>

int calcularFat(int n) {
    if (n == 0)
        return 1;
    else
        return n * calcularFat(n - 1);
}

int main() {
    int n = -1;
    while (n < 0) {
        printf("Digite o numero que você deseja calcular o fatorial: ");
        scanf("%d", &n);
        printf("O fatoral do número é: %d\n", calcularFat(n));
    }
    return 0;
}