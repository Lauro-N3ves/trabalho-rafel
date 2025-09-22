#include <stdio.h>

int main() {
    int opcao, num;

    do {
        printf("\nMenu:\n");
        printf("1. Calcular o quadrado de um numero\n");
        printf("2. Calcular o fatorial de um numero\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um numero: ");
                scanf("%d", &num);
                printf("O quadrado de %d e %d\n", num, num * num);
                break;
            case 2:
                printf("Digite um numero: ");
                scanf("%d", &num);
                if (num < 0) {
                    printf("Nao existe fatorial de numero negativo!\n");
                } else {
                	
                int i;
				long long fatorial = 1;
				for (i = 1; i <= num; i++) {
				    fatorial *= i;
				}

                    printf("O fatorial de %d e %lld\n", num, fatorial);
                }
                break;
            case 3:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}

