#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int vetor[7];
    int temp, troca;
    int i, j;

    printf("Digite um valor (ate 7 numeros):\n");

    for (i = 0; i < 7; i++) {
        if (scanf("%d", &vetor[i]) != 1) {
            printf("Entrada inválida. Por favor, insira um número.\n");
            return 1;
        }
    }

    for (i = 0; i < 6; i++) {
        for (j = i + 1; j < 7; j++) {
            if (vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
                troca = 1;
            }
        }
    }

    if (troca) {
        printf("Números em ordem crescente: ");
        for (i = 0; i < 7; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    } else {
        printf("Os números já estão em ordem crescente.\n");
    }
	
	
	return 0;
}
