#include <stdio.h>

int main()
{
    float nota;
    float soma = 0;
    int quantidade = 0;

    printf("Digite uma nota ou -1 para sair: ");
    scanf("%f", &nota);

    while (nota != -1)
    {
        soma += nota;
        quantidade++;

        printf("Digite uma nota ou -1 para sair: ");
        scanf("%f", &nota);
    }

    printf("\n--- Estatisticas ---\n");
    printf("Quantidade de notas: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    if (quantidade > 0)
    {
        printf("Media: %.2f\n", soma / quantidade);
    }
    else
    {
        printf("Media: nao foi possivel calcular.\n");
    }

    return 0;
}