#include "polinomio.h"
#include <math.h>

polinomio somarPoli(polinomio p1, polinomio p2)
{
    polinomio result;
    result.c3 = p1.c3 + p2.c3;
    result.c2 = p1.c2 + p2.c2;
    result.c1 = p1.c1 + p2.c1;
    result.c0 = p1.c0 + p2.c0;

    return result;
}

polinomio derivadaPoli(polinomio p)
{
    polinomio result;
    result.c3 = 0;
    result.c2 = 3*p.c3; 
    result.c1 = 2*p.c2;
    result.c0 = p.c1;

    return result;
}

solucao raizesPoli(polinomio p)
{
    float x1, x2;
    solucao res;
    if(p.c3 == 0 && p.c2 == 0)
    {
        x1 = (-p.c0)/p.c1;
        x2 = x1;
        res.x1 = x1;
        res.x2 = x2;
    } else if (p.c3 == 0 && p.c2 != 0) {
        x1 = ((p.c1 + sqrt((p.c1 * p.c1) - 4 * p.c2 * p.c0)))/ 2 * p.c2;
        x2 = ((p.c1 - sqrt((p.c1 * p.c1) - 4 * p.c2 * p.c0)))/ 2 * p.c2;
        res.x1 = x1;
        res.x2 = x2;
    }
    
    return res;
}

float valorPoli(polinomio p, int x)
{
    float result = pow(x, 3) * p.c3 + pow(x, 2) * p.c2 + x * p.c1 + p.c0;
    return result;
}