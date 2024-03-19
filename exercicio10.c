#include <stdio.h>

int calcularQuociente(int n1, int n2) {
    int controle = 1;
    if (n1 < 0) {
        n1 = n1 * -1;
        controle = controle * -1;
    }
    if (n2 < 0) {
        n2 = n2 * -1;
        controle = controle * -1;
    }
    if (n1 < n2) {
        return 0;
    } else {
        return 1 * controle + calcularQuociente(n1 - n2, n2);
    }
}


int main() {
    int n1, n2;
    printf("Digite qual será o dividendo: ");
    scanf("%d", &n1);
    printf("Digite qual será o divisor: ");
    scanf("%d", &n2);
    printf("O quociente da divisão de %d por %d é igual a %d", n1, n2, calcularQuociente(n1,n2));
    return 0;
}