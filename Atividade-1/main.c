#include <stdio.h>
#include "polinomio.h"

int main(void)
{
    int option = -1;
    polinomio p;
    polinomio resultado;
    solucao s1;
    int arg1;
    float valor;

    printf("Digite o polinomio: ");
    scanf("%f %f %f %f", &p.c3, &p.c2, &p.c1, &p.c0);

    do {
        printf("Qual opcao vc quer?\n");
        printf("\t1.Somar polinomios\n");
        printf("\t2.Derivada do polinomio\n");
        printf("\t3.Raizes do polinomio (grau 2 pra baixo)\n");
        printf("\t4.Valor de um polinomio em um ponto x\n");
        printf("\t5.Sair\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            polinomio p1;
            printf("Digite o outro polinomio: ");
            scanf("%f %f %f %f", &p1.c3, &p1.c2, &p1.c1, &p1.c0);
            resultado = somarPoli(p, p1);
            printf("Polinomio resultante da soma: %.2fx³ + %.2fx² + %.2fx + %.2f\n", resultado.c3, resultado.c2, resultado.c1, resultado.c0);
            break;
        case 2:
            resultado = derivadaPoli(p);
            printf("Polinomio resultante da derivada: %.2fx³ + %.2fx² + %.2fx + %.2f\n", resultado.c3, resultado.c2, resultado.c1, resultado.c0);
            break;
        case 3:
            s1 = raizesPoli(p);
            printf("As raizes da equacao: %.2f e %.2f\n", s1.x1, s1.x2);
            break;
        case 4:
            printf("Digite o ponto x: \n");
            scanf("%d", &arg1);
            valor = valorPoli(p, arg1);
            printf("O valor do polinomio neste ponto: %.2f\n", valor);
            break;
        default:
            break;
        }
    } while (option != 5);

    return 0;
}