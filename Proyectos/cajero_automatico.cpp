#include <iostream>
using namespace std;

int main(){
	
	int saldo_inicial=1000,opc;
	float extra,saldo=0,retiro;
	
	printf("\tBienvenido a su cajero virtual: \n");
	printf("1. Ingresar dinero en cuenta: \n");
	printf("2. Retirar dinero de la cuenta: \n");
	printf("3. Salir\n");
	printf("Opcion: ");
	scanf("%d",&opc);
	
	switch(opc){
		case 1: 
			printf("Dijite la cantidad de dinero a ingresar: ");
			scanf("%f",&extra);
			saldo=saldo_inicial+extra;
			printf("Dinero en cuenta: %.2f",saldo);
			break;
		case 2:
			printf("Dijite la cantidad de dinero que va a retirar: ");
			scanf("%f",&retiro);
			
			if(retiro>saldo_inicial){
				printf("No tiene esa cantidad de dinero: ");
			}else{
				saldo=saldo_inicial-retiro;
				printf("Dinero en cuenta: %.2f",saldo); 
				break;
			}
		case 3: break;
	}
	
	
	return 0;
}
