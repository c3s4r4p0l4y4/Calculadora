#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    //Calcular la suma de los números pares e impares comprendidos entre 1 y n.
    /*par=la suma de los numeros pares
    impar=la suma de los numeros impares
    i=contador para la salida
    cp=contador de numeros pares
    ci=contador de numero impares
    n=cantidad de numero que seran sumados
    number=numeros que seran dijitados*/
    int par=0,impar=0,i=1,n,number,cp=0,ci=0,sum1=0,sum2=0;
    printf("Dijite la cantidad de numeros: ");
    scanf("%d",&n);

    while(i<=n){
        printf("Dijite el numero %d: ",i);
        scanf("%d",&number);
        i++;

        if(number%2==0){
            sum1+=number;
            cp++;
        }
        else{
            sum2+=number;
            ci++;
        }
    }

    printf("La suma de los numeros pares es: %d\nCantidad de numeros pares: %d\n",sum1,cp);
    printf("La suma de los numeros pares es: %d\nCantidad de numeros impares: %d\n",sum2,ci);
   
    system("pause");
    return 0;
}
