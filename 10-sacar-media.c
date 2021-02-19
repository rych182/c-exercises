/*6. Calcule la media aritm�tica de 3 n�meros cualesquiera (Propuesto)*/

#include<stdio.h>

int main(){
	int n1,n2,n3,media_aritmetica=0;
	
	printf("Digite 3 numeros: ");
	scanf("%i %i %i",&n1,&n2,&n3);
	
	media_aritmetica = (n1+n2+n3)/3;
	
	printf("La media aritmetica es: %i",media_aritmetica);
	
	
	return 0;
}
