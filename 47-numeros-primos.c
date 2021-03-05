#include<stdio.h>

int main(){
    int i, numero, cont=0;

    printf("DIgite un número: "); scanf("%i",&numero);

    for ( i = 1; i < numero; i++){
        if (numero%i ==0){//significa que divida el número entre todos los números del bucle y si su división es exacta significa que hay un nuevo número en el que su división es exacta
            cont++;
        }
    }
    if (cont >2){//el número es divisible por más de 2 números
        printf("\n el número es compuesto");
    }else{
        printf("\n El número es primo");
    }
    
    return 0;
}