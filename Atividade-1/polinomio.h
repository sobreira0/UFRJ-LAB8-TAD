typedef struct {
    float c3, c2, c1, c0;
} polinomio;
typedef struct { 
    float x1, x2;
} solucao;
polinomio somarPoli(polinomio p1, polinomio p2);
polinomio derivadaPoli(polinomio p); 
solucao raizesPoli(polinomio p); 
float valorPoli(polinomio p, int x); 
