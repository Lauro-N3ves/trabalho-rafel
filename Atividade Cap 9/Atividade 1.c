#include <stdio.h>

void dobrar_por_valor(int x) {
    x = x * 2;
    printf("Dentro de dobrar_por_valor, x = %d\n", x);
}

void dobrar_por_referencia(int *x_ptr) {
    *x_ptr = *x_ptr * 2;
    printf("Dentro de dobrar por referencia, valor apontado = %d\n", *x_ptr);
}

int main() {
    int numero = 10;
    printf("Valor inicial: %d\n\n", numero);

    printf("Chamando por valor...\n");
    dobrar_por_valor(numero);
    printf("Apos chamada por valor, numero = %d\n\n", numero); 

    printf("Chamando por referencia...\n");
    dobrar_por_referencia(&numero);
    printf("Apos chamada por referencia, numero = %d\n\n", numero); 

    return 0;
}

