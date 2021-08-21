#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    /*Escribir un programa que escriba la calificación correspondiente a una nota, 
    de acuerdo con el siguiente criterio:*/    
    
    float n;
    printf("Dijite la nota: ");
    scanf("%f",&n);

    if(0<n&&n<5.0){
        printf("Suspenso\n");
    }
    else if(5<n&&n<6.5){
        printf("Aprobado\n");
    }
    else if(6.5<n&&n<8.5){
        printf("Notable\n");
    }
    else if(8.5<n&&n<10){
        printf("Sobresaliente\n");
    }
    else{
        printf("Matricula de honor");
    }

    system("pause");
    return 0;
}
