#include<stdio.h>

int main(){
    int numero;

    printf("Digite un número: ");
    scanf("%i",&numero);

    (numero%2==0) ? printf("El número es par") : printf("El número es impar");

    return 0;
}