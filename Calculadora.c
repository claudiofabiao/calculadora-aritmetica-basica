#include <stdio.h>
#include <locale.h>

void calc();

int main() {
    setlocale(LC_ALL, "");

    printf("Calculadora Aritmética Básica\n");
    printf("Versão: 1.0.0\n\n");

    calc();

    printf("Obrigado por utilizar a calculadora!");

    return 0;
}

void calc() {
    float a, b;
    char operator, restart;

    start:

    printf("Calcular: ");

    if (scanf("%f%1s%f", &a, &operator, &b) == 3) {
        switch (operator) {
            case '+':
                printf("O resultado é %g.\n\n", a + b);
                break;

            case '-':
                printf("O resultado é %g.\n\n", a - b);
                break;

            case '*':
                printf("O resultado é %g.\n\n", a * b);
                break;

            case '/':
                printf("O resultado é %g.\n\n", a / b);
                break;

            default:
                printf("O operador é inválido.\n\n");

                goto start;
        }
    } else {
        printf("A expressão é inválida.\n\n");

        fflush(stdin);

        goto start;
    }

    printf("Fazer outro cálculo?\n");
    printf("Insira \"S\" ou \"s\" para \"SIM\" ou qualquer outro caractere para \"NÃO\": ");

    scanf("%1s", &restart);

    printf("\n");

    if (restart == 's' || restart == 'S') {
        goto start;
    }
}