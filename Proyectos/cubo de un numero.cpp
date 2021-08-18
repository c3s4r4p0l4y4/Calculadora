#include <iostream>
#include <math.h>
using namespace std;

int main(){
	/*
	caso 1: cubo de un numero 
	caso 2: numero impar o par
	caso 3: salir
	*/
	int n1,op;
	float n2,cubo;
	
	printf("Elige una de estas opciones\n");
	printf("1) Cubo de un numero\n");
	printf("2) Numero impar o par\n");
	printf("3) Salir\n");
	printf("Opcion: ");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			printf("Dijite el numero: ");
			scanf("%f",&n2);
			cubo=pow(n2,2);
			printf("El cubo de su numero es: %.0f",cubo);
			break;
		case 2:
			printf("Dijite el numero: ");
			scanf("%d",&n1);
			if(n1==0){
				printf("Es cero");
			}else if(n1>0){
				printf("El numero es par");
			}else{
				printf("El numero es impar");
			}
		case 3: break;	
	}
	
	return 0;
	 
}
