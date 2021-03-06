#include <stdio.h>
int main (){
   int numero , acumulador=0 , contador =0  , i ;
 
 printf("Ingrese el valor de n " );
 scanf("%i",&numero);
 
 for(i=1;i<=numero;i++){
   if(i%2==0){
    acumulador = acumulador + i;
    contador=contador+1;
    printf("%i\n",i);
   }
  }
    printf("\nLa suma de los numeros pares es %i ",acumulador);
    printf("\nHAY  %i numeros ",contador); 
return 0 ;}//cierra main