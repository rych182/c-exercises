/*12. Seleccionar un tipo de veh�culo e indicar el peaje a pagar seg�n un valor num�rico
1 - turismo, peaje = $500.
2 - autobus, peaje = $3000.
3 - motocicleta, peaje = $300.
caso contrario - Vehiculo no autorizado.*/

#include<stdio.h>

int main(){
	int tipo_vehiculo,peaje;
	printf("Digite el tipo del vehiculo: "); 
	scanf("%i",&tipo_vehiculo);
	switch(tipo_vehiculo){
		case 1: peaje = 500;
				printf("Turismo $%i",peaje);break;
		case 2: peaje = 3000;
				printf("Autobus $%i",peaje);break;
		case 3: peaje = 300;
				printf("Motocicleta $%i",peaje);break;
		default: printf("Vehiculo no autorizado");		
	}	
	return 0;
}
