//1 1 2 3 5 8 13
//FORMA EXPLICADA
#include<stdio.h>
int inicial =0;
int inicial2 =1;
int generado =0;

int fibonacci(){
    inicial = inicial2;//1,0,1,1,2,3
    inicial2 = generado;//0,1,1,2,3,5
    generado = inicial + inicial2;//1,1,2,3,5,8
    return generado; //1,1,2,3,5
}

int main(){
    int numero,i;
    printf("Ingresa un Número\n");
    scanf("%i",&numero);
    for ( i = 0; i < numero; i++){
        printf("%d\n", fibonacci());
    }
    return 0;
}

/* FORMA ELEGANTE
#include<stdio.h>
int main(){
    int numero, i , x = 0, y=1,z=1;
    printf("Digite el número de elementos que quieres sumar en fibonacci");
    scanf("%i",&numero);

    printf("1, ");

    for (i = 1; i < numero; i++){
        z= x+y;
        x = y;
        y=z;

        printf("%i, ",z);
    }
    
}*/