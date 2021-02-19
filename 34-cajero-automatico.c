#include<stdio.h>

int main(){
    int opcion;
    float agregar,retirar,saldo = 1000;

    printf("\t Bienvenido a su Cajero Virtual");
    printf("\n 1- Ingreso en cuenta");
    printf("\n 2- Retirar dinero de la cuenta");
    printf("\n 3- Salir");
    printf("\n 0- Opción");
    scanf("%i",&opcion);

    switch(opcion){
        case 1: printf("\n ¿Cuanto dinero desea ingresas?");
                scanf("%f",&agregar);
                saldo += agregar;
                printf("El saldo total es de: %.2f",saldo);
        break;

        case 2: printf("¿Cuanto dinero desea retirar?");
        scanf("%f",&retirar);
        if(retirar > saldo){
            printf("La cantidad a retirar es mayor al saldo");
        }
        else{
            saldo -= retirar;
            printf("El saldo disponible es de: %f",saldo);
        }
        break;

        case 3: break;

        default: printf("Se equivoco de opción de menú");
    }
}