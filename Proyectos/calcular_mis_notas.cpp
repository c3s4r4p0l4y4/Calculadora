#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    printf("Bienvenido al programa que calcula el promedio de notas: ");
    /*Tengo que tener variables dependiendo de las notas, el usuario me dara x notas
    entonces */
    float x,a,c=0,n;
    double avg;
    printf("\nIngrese la cantidad de notas: ");
    scanf("%f",&n);
    for(float i=0;i<=n;i++){
        printf("\nIngrese la nota: %f:",i+1);
        scanf("%f",&a);  //el valor de a va a variar en cada ciclo
        c+=a;
    }
    avg=c/n;
    printf("\nEl promedio es: %lf",avg);
    
    system("pause");
    return 0;
}
