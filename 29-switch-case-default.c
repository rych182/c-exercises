#include<stdio.h>
int main(){
    char vocal;

    printf("Digite una vocal: ");
    scanf("%c",&vocal);

    switch(vocal){
        case 'a': printf("\nVocal a");break;
        case 'e': printf("\nVocal e");break;
        case 'i': printf("\nVocal i");break;
        case 'o': printf("\nVocal o");break;
        case 'u': printf("\nVocal u");break;
        default: printf("Se equivoco, no es una vocal");
    }
    return 0;
}