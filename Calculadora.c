#include <stdio.h>
#include <locale.h>

void calc();

int main() {
    setlocale(LC_ALL, "");

    printf("Calculadora Aritm�tica B�sica\n");
    printf("Vers�o: 1.0.0\n\n");

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
                printf("O resultado � %g.\n\n", a + b);
                break;

            case '-':
                printf("O resultado � %g.\n\n", a - b);
                break;

            case '*':
                printf("O resultado � %g.\n\n", a * b);
                break;

            case '/':
                printf("O resultado � %g.\n\n", a / b);
                break;

            default:
                printf("O operador � inv�lido.\n\n");

                goto start;
        }
    } else {
        printf("A express�o � inv�lida.\n\n");

        fflush(stdin);

        goto start;
    }

    printf("Fazer outro c�lculo?\n");
    printf("Insira \"S\" ou \"s\" para \"SIM\" ou qualquer outro caractere para \"N�O\": ");

    scanf("%1s", &restart);

    printf("\n");

    if (restart == 's' || restart == 'S') {
        goto start;
    }
}