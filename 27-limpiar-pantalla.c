#include<stdio.h>
#include<stdlib.h>

int main(){
    char tecla;

    printf("Programa de Borrado de pantalla!!!");
    printf("\n----------------------------\n");
    printf("\n----------------------------\n");
    printf("\nDigite el número 1: ");
    scanf("%c",&tecla);

    if(tecla=='1'){
        system("clear");//Función para limpiar pantalla
        printf("Ha funcionado el limpiado de pantalla");
    }else{
        fflush(stdin);//sirve para limpiar el buffer
        printf("\n No ha funcionado el limpiado de pantallas");
        printf("\n por favor digite el número1: ");
        scanf("%c",&tecla);

        if(tecla=='1'){
            system("clear");
        }else{
            printf("No funciono!");
        }
    }
}