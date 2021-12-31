#include<stdio.h>
#include<stdlib.h>
int main(void){

    int x = 10, y = 5, z = 7, k = 7;

    printf("\nOs operadores relacionais sao usados para fazer compracoes\n");
    printf("Qaundo o resultado da comparacao eh FALSO retonam 0 (ZERO)\n");
    printf("Quando o resultado da comparacao eh VERDADEIRO RETORNAM 1 \n");

    printf("\nValor de x = %d", x);
    printf("\nValor de y = %d", y);
    printf("\nValor de z = %d", z);
    printf("\nValor de k = %d \n", k);

    printf("\nExemplo 1: x > y : %d", x > y); //retorna 1, pois é VERDADEIRO
    printf("\nExemplo 2: x < y : %d\n", x < y); //retorna 0, pois é FALSO

    printf("\nExemplo 3: z == k : %d", z == k); //retorna 1, pois é VERDADEIRO
    printf("\nExemplo 4: z != k : %d\n", z != k); // retorna 0, pois é FALSO

    printf("\nExemplo 5: z >= x : %d", z >= x); //retorna 0, pois é FALSO
    printf("\nExemplo 6: z <= k : %d", z <= k); //retorna 1, póis é VERDADEIRO

return 0;

}