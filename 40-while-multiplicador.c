#include<stdio.h>

int main(){
    int cont=1, n, suma=0, multiplicacion = 1;
    
    printf("Digita el total de números que quieres sumar o multiplicar: ");
    scanf("%i",&n);
    if(n < 10){
        while(cont <= n){
            suma += cont;
            cont++;
        }
        printf("\n La suma ó multiplicacion es: %i",suma);
    }else{
        while(cont <= n){
            multiplicacion = multiplicacion * cont;
            cont++;
        }
        printf("\n La multiplicacion es: %i",multiplicacion);
    }
    return 0;
}