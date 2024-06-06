# Aula Programação de Computadores I da UFRJ

## Atividade feita sobre polinomios usando Tipo Abstrado de Dados (Struct)

# Atividade 1

## polinomio.h

- Declaração das estruturas e funções a serem usadas

## polinomio.c

### implementação das funções

- somarPoli -> Soma os coeficientes de dois polinomios
- derivadaPoli -> Calcula a derivada de um polinomio
- raizesPoli -> Calcula as raizes de um polinomio do segundo e primeiro grau
- valorPoli -> Calcula o valor do polinomio em um determinado ponto

## main.c

- Implementação do que foi pedido na atividade

# Atividade 2

## main.c

### funções

- pixelDif -> Soma os componentes de dois Pixels, caso a soma exceda 255, o valor padrão é o próprio 255
- candyColors -> Verifica se o Pixel recebido é uma cor pastel (candy color), retorna 1 se sim e 0 se não

## Como compilar
### Use o seguinte comando no terminal já no diretório do código
```console
gcc main.c polinomio.c -o main -Wall
./main```
