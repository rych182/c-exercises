#include <stdio.h>

int main(){
    int i,num1,num2,suma_pares=0;
    printf("Ingrese el rango de numeros pares que desea sumar. Ejemplo: 2 10 \n");
    scanf("%i %i",&num1,&num2);
    i=num1;
    while(i<=num2){
        if(i%2==0){
            suma_pares=suma_pares+i;
        }
        i++;
    }
    printf("%i",suma_pares);
    system("PAUSE");
    return 0;
}