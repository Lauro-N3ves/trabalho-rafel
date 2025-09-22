#include <stdio.h>

void contador() {
    int a = 0;          
    static int b = 0;   

    a++;
    b++;

    printf("a = %d, b = %d\n", a, b);
}

int main() {
    printf("Chamada 1:\n");
    contador();
    printf("Chamada 2:\n");
    contador();
    printf("Chamada 3:\n");
    contador();
    return 0;
}

