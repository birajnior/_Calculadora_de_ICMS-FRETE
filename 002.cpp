#include<stdio.h>
#include<stdlib.h>
int main(void){

    int a = 8, b = 9, c = 12, resultado;

    resultado = (a%2) + c - b;
    printf("Resultado = %d\n", resultado);

    resultado = a * b + a + c - b;
    printf("\nResultado = %d\n", resultado);

    resultado = (c - a) / 2 + b;
    printf("\nResultado = %d\n", resultado);

    resultado = a >= b;
    printf("\nResultado = %d\n", resultado);

    resultado = c != a;
    printf("\nResultado = %d\n", resultado);

    resultado = b <= c;
    printf("\nResultado = %d\n", resultado);
 return 0;

}