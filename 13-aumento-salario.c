#include<stdio.h>

int main(){
    float salario, aumento,salario_final;

    printf("Digite su salario: ");
    scanf("%f",&salario);

    aumento = salario * 0.25;
    salario_final = salario + aumento;

    printf("El salario con aumento del 25 porciento es: %.1f",salario_final);

    return 0;
}