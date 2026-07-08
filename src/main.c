#include <stdio.h>

int main() {

    int opcao;

    do {

        printf("\n=========================\n");
        printf("   CALCULADORA EM C\n");
        printf("=========================\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d",&opcao);

        switch(opcao){

            case 1:
                printf("\nFuncionalidade em desenvolvimento...\n");
                break;

            case 2:
                printf("\nFuncionalidade em desenvolvimento...\n");
                break;

            case 3:
                printf("\nFuncionalidade em desenvolvimento...\n");
                break;

            case 4:
                printf("\nFuncionalidade em desenvolvimento...\n");
                break;

            case 0:
                printf("\nEncerrando...\n");
                break;

            default:
                printf("\nOpcao invalida.\n");

        }

    }while(opcao != 0);

    return 0;

}
