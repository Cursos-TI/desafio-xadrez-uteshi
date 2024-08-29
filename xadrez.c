#include <stdio.h>

int movimentoBispo;
int movimentoRainha;
int movimentoTorre;
int movimentoCavalo;

int i, j;

int main() {
    printf("Insira a quantidade de movimentos do Bispo para a direita/cima:");
    scanf("%d", &movimentoBispo);
    printf("Insira a quantidade de movimentos da Torre para a direita:");
    scanf("%d", &movimentoTorre);
    printf("Insira a quantidade de movimentos da Torre para a esquerda:");
    scanf("%d", &movimentoRainha);

    printf("Movimento do Bispo: ");
    for (i = 1; i <= movimentoBispo; i++) {
            printf("(Cima, Direita), ");
        }
    printf("\nMovimento da Torre: ");
    for (i = 1; i <= movimentoTorre; i++) {
            printf("(Direita), ");
        }
    printf("\nMovimento da Rainha: ");
    for (i = 1; i <= movimentoRainha; i++) {
            printf("(Esquerda), ");
        }

return 0;
}
