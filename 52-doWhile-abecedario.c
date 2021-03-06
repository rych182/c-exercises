#include<stdio.h>

int main(){
    char letra = 'a';//la a es 61hexadecimal

    do
    {
        printf("%c.\n",letra);
        letra++;
    } while (letra<='z');
    return 0;
}