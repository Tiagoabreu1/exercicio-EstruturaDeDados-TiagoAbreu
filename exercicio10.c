#include <stdio.h>

int calcularQuociente(int n1, int n2) {
    int x = 0;
    while (n1>=n2) {
        n1 = n1 - n2;
        x++;
    }
    return x;
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