#include<stdio.h>

int main(){
    int i, numero,factorial=1;

    printf("DIgite un número factorial: "); scanf("%i",&numero);

    for ( i = 1; i <= numero; i++){
        factorial *= i;
    }
    printf("El número factorial es: %i",factorial);   
    return 0;
}