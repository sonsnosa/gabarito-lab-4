#include <stdio.h>

int main()
{
    int opcao;

    do
    {
        printf("\n");
        printf("===== MENU =====\n");
        printf("1 - Mostrar mensagem\n");
        printf("2 - Mostrar seu nome\n");
        printf("0 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("Ola! Seja bem-vindo ao programa!\n");
                break;

            case 2:
                printf("Meu nome e Jorge.\n");
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida\n");
        }

    } while (opcao != 0);

    return 0;
}