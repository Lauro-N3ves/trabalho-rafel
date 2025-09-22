#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[100];
    char autor[100];
    int anoPublicacao;
};

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    struct Livro meuLivro;
    strcpy(meuLivro.titulo, "O Guia do Mochileiro das Galaxias");
    strcpy(meuLivro.autor, "Douglas Adams");
    meuLivro.anoPublicacao = 1979;

    printf("Titulo do livro: %s\n", meuLivro.titulo);

    return 0;
}

