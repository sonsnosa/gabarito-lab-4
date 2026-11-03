#include <stdio.h>

int main()
{
    int opcao;
    int num1, num2;
    int numero;
    int i;

    float nota1, nota2, media;
    int soma;

    do
    {
        printf("\n");
        printf("===================== MENU PRINCIPAL =====================\n");
        printf("1 - Somar dois numeros\n");
        printf("2 - Calcular media\n");
        printf("3 - Tabuada\n");
        printf("0 - Sair\n");
        printf("==========================================================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("\nDigite o primeiro numero: ");
                scanf("%d", &num1);

                printf("Digite o segundo numero: ");
                scanf("%d", &num2);

                soma = num1 + num2;

                printf("Resultado da soma: %d\n", soma);
                break;

            case 2:
                printf("\nDigite a primeira nota: ");
                scanf("%f", &nota1);

                printf("Digite a segunda nota: ");
                scanf("%f", &nota2);

                media = (nota1 + nota2) / 2;

                printf("Media: %.2f\n", media);
                break;

            case 3:
                printf("\nDigite um numero para calcular a tabuada: ");
                scanf("%d", &numero);

                printf("\n===== TABUADA DO %d =====\n", numero);

                for (i = 1; i <= 10; i++)
                {
                    printf("%d x %d = %d\n", numero, i, numero * i);
                }

                break;

            case 0:
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}