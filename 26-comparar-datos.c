/*8. Ingresar por teclado el nombre, la edad y el sexo de cualquier persona e 
imprima, solo si la persona es de sexo masculino y mayor de edad, el nombre de 
la persona.*/

#include<stdio.h>
#include<string.h>

int main(){
 char nombre[30], sexo[20];
 int edad;
 
 printf("Ingresa tu nombre: ");
  gets(nombre);
 printf("Ingresa tu sexo: ");
  gets(sexo);
 printf("Digite su edad: ");
  scanf("%i" , &edad);
  
  printf("\n");
 
 if(strcmp(sexo,"masculino") == 0 && (edad >= 18)){
  printf("El genero de la persona es: %s\n", sexo);
   printf("El nombre de la persona es: %s\n", nombre);
    printf("Eres mayor de edad");
 }
 else
 if(strcmp(sexo,"Masculino") == 0 && (edad >= 18)){
  printf("El genero de la persona es: %s\n", sexo);
   printf("El nombre de la persona es: %s\n", nombre);
    printf("Eres mayor de edad: %i", edad);
 }else{
  printf("Ninguno de los requisitos anteriores se cumplen");
 }
 
 return 0;
}