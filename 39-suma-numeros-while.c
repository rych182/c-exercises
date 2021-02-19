#include<stdio.h>

int main(){
    int cont, n, suma=0;
    
    printf("Digita el total de números que quieres sumar;");
    scanf("%i",&n);
    cont = 1;
    while(cont <= n){
        suma += cont;
        cont++;
    }
    printf("\n La suma es: %i",suma);
    return 0;
}