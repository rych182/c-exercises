#include<stdio.h>
int main(){
    int n1,n2;

    printf("Digite 2 números: ");
    scanf("%i %i",&n1,&n2);

    if(n1>n2){
        printf("\n El mayor es: %i",n1);
    }
    else if(n2>n1){
        printf("\n El mayor es: %i",n2);
    }else{
        printf("\n Ambos números son iguales");
    }
    return 0;
}