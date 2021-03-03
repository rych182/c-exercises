#include<stdio.h>

int main(){
    int i, suma =0;

    for (i = 0; i <= 10; i++){
        if (i%2 ==0){
            suma += i;
        }
    }
    printf("La suma de los números pares es: %i",suma);
    return 0;
}