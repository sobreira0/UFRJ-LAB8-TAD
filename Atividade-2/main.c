#include <stdio.h>

typedef struct {
    int r, g, b;
} Pixel;

Pixel pixelDif(Pixel a, Pixel b) 
{
    Pixel res;
    int x = a.r + b.r;
    int y = a.g + b.g;
    int z = a.b + b.b;

    if (x > 255)
        res.r = 255;
    else
        res.r = x;
    
    if (y > 255)
        res.g = 255;
    else
        res.g = y;

    if (z > 255)
        res.b = 255;
    else
        res.b = z;

    return res;
}

int candyColors(Pixel p)
{
    int maiorVal = (p.r > p.g && p.r > p.b) ? p.r : (p.g > p.b) ? p.g : p.b;
    int menorVal = (p.r < p.g && p.r < p.b) ? p.r : (p.g < p.b) ? p.g : p.b;
    int intermed = p.r + p.g + p.b - (maiorVal + menorVal);

    if (maiorVal == 255 && menorVal >= 192 && menorVal <= 224 && intermed >= menorVal && intermed <= maiorVal)
        return 1;

    return 0;
}

int main(void) 
{
    int option = -1;
    int r, r1, g, g1, b, b1;
    Pixel p1, p2, res;
    int arg1, arg2;

    do {
        switch(option) 
        {
            case 1:
                printf("Insira as cores do primeiro pixel (r g b)");
                scanf("%d %d %d", &r, &g, &b);

                if(r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
                {
                    printf("Valor invalido");
                    return -1;
                } 

                printf("Insira as cores do segundo pixel (r g b)");
                scanf("%d %d %d", &r1, &g1, &b1);

                if(r1 < 0 || r1 > 255 || g1 < 0 || g1 > 255 || b1 < 0 || b1 > 255)
                {
                    printf("Valor invalido");
                    return -1;
                }

                p1.r = r;
                p1.g = g;
                p1.b = b;

                p2.r = r1;
                p2.g = g1;
                p2.b = b1;
                break;
            
            case 2:
                res = pixelDif(p1, p2);
                printf("Pixel resultante: r = %d, g = %d, b = %d", res.r, res.g, res.b);
                break;
            
            case 3:
                arg1 = candyColors(p1);
                arg2 = candyColors(p2);
                if (arg1)
                    printf("P1 Eh uma cor pastel");
                else 
                    printf("P1 Nao eh uma cor pastel");

                if (arg2)
                    printf("P2 Eh uma cor pastel");
                else 
                    printf("P2 Nao eh uma cor pastel");
                break;

            default:
                break;
        }
    } while (option != 7);


    





    return 0;
}