#include <stdio.h>

int main() {

    int opcao;
    float num1, num2, resultado;

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
        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 4){

            printf("\nDigite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);

        }

        switch(opcao){

            case 1:
                resultado = num1 + num2;
                printf("\nResultado: %.2f\n", resultado);
                break;

            case 2:
                resultado = num1 - num2;
                printf("\nResultado: %.2f\n", resultado);
                break;

            case 3:
                resultado = num1 * num2;
                printf("\nResultado: %.2f\n", resultado);
                break;

            case 4:

                if(num2 == 0){

                    printf("\nErro: divisao por zero!\n");

                }else{

                    resultado = num1 / num2;
                    printf("\nResultado: %.2f\n", resultado);

                }

                break;

            case 0:
                printf("\nPrograma encerrado.\n");
                break;

            default:
                printf("\nOpcao invalida!\n");

        }

    } while(opcao != 0);

    return 0;
}
