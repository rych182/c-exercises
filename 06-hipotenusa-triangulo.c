/*Math es la libreria que contiene las funciones matematicas sqrt y pow
sqrt: te da la raiz cuadrada
pow: te eleva un digito a la potencia que le digas

*/
#include<stdio.h>
#include<math.h>

int main(){
    float cateto1,cateto2,hipotenusa;

    printf("Digite el valor de los 2 catetos: ");
    scanf("%f %f",&cateto1 , &cateto2);

    hipotenusa = sqrt( pow(cateto1 , 2) +pow( cateto2 , 2) );

    printf("\nEl valor de la hipotenusa es: %.1f", hipotenusa);

    return 0;
}


