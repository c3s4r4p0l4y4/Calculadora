#include <iostream>
using namespace std;

int main(){
	float n1,n2,n3,comparador;
	printf("Dijite tres numeros: \n");
	scanf("%f\n %f\n %f",&n1,&n2,&n3);
	printf("Ahora ingrese un seugndo numero: ");
	scanf("%f",&comparador);
	
	/*
	if(n1==comparador){
		printf("El primer numero ingresado es igual a %.1f",comparador);
	}else if(n2==comparador){
		printf("El segundo numero ingresado es igual a %.1f",comparador);
	}else if(n3==comparador){
		printf("El tercer numero ingresado es igual a %.1f",comparador);
	}else{
		printf("El numero %.1f no coincide con ningun numero ingresado anteriormente",comparador);
	}
	*/
	
	if(comparador==n1 || comparador==n2 || comparador==3){
		printf("El cuarto numero ingresado, coincide con uno de los 3 numeros anteriores");
	}else{
		printf("El cuarto numero ingresado, no coincide con uno de los 3 numeros anteriores");
	}
	return 0;
}
