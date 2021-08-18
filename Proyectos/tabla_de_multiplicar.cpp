#include <iostream>
#include <stdlib.h>

int main(){
	
	int num;
	printf("Tablas de Multiplicar del 1-100\n");
	do{
		printf("Dijite un numero: ");
		scanf("%d",&num);
	}while((num<1)||(num>100));
	
	for(int i=1;i<=100;i++){
			printf("%d*%d=%.0d %.0d\n",num,i,num*i);
		}
	system("pause");
	return 0;
}
