#include<stdio.h>

int main(){
    char nombre[30],signo[20];

    printf("Digite su nombre: ");
    gets(nombre);
    printf("Digite su signo: ");
    gets(signo);

    if(strcmp(signo,"aries")==0){
        printf("\n Es signo aries, su nombre es: %s",nombre);
    }else{
        printf("NO es aries");
    }
    return 0;
}