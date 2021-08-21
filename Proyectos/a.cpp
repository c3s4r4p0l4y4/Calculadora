#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    /*Escribir un programa que solicite el ingreso de la temperatura en grados, 
    si la temperatura está por encima de 100 grados desplegar el mensaje “arriba 
    del punto de ebullición del agua”, de lo contrario desplegar el mensaje 
    “abajo del punto de ebullición del agua”.*/

    int t=0; //t=temperatura
    printf("Temperatura delete agu\n;");
    printf("Ingrese la temperatura en grados: ");
    scanf("%d",&t);

    if(t>100){
        printf("\narriba del punto de ebullición del agua");
    }
    else{
        printf("\nabajo del punto de ebullición del agua");
    }
    
    system("pause");
    return 0;
}
