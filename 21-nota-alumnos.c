#include<stdio.h>

int main(){
    float nota;

    printf("Digite la nota del examen: ");
    scanf("%f",&nota);

    if(nota > 5.99){
        puts("El alumno esta aprobado");
    }else{
        puts("El alumno no aprobo");
    }
    return 0;
}