#include<stdio.h>

int main(){

    int numero,i=1;
    printf("Digita un número y te diré cuales son multiplos de 3:");
    scanf("%i",&numero);

    while(i<=numero){
        if(i%3==0){
            printf("%i.\n",i);
        }
        i++;
    }

    return 0;
}