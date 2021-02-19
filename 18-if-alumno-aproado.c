#include<stdio.h>

int main(){
    float examen;
    printf("Digite la nota del examen: ");
    scanf("%f",&examen);
    if(examen > 5.99){
        printf("El alumno esta aprobado");
    }
    return 0;
}