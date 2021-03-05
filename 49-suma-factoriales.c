#include<stdio.h>

int main(){
    int i, numeroUno, numeroDos,factorialUno=1, factorialDos=1, resultado;

    printf("DIgite el primer número factorial que quiere sumar: "); scanf("%i",&numeroUno);
    printf("DIgite el segundo número factorial que quiere sumar: "); scanf("%i",&numeroDos);

    for ( i = 1; i <= numeroUno; i++){
        factorialUno *= i;
    }

    for ( i = 1; i <= numeroDos; i++){
        factorialDos *= i;
    }

    resultado = factorialUno + factorialDos;    
    printf("La suma de los números factoriales es: %i",resultado);   
    return 0;
}