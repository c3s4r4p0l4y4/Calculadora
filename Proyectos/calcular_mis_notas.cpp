#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    printf("Bienvenido al programa que calcula el promedio de notas: ");
    /*I have to have variables depending on the notes, the user entered x notes, so*/
    float x,a,c=0,n;
    double avg;
    printf("\nIngrese la cantidad de notas: ");
    scanf("%f",&n);
    for(float i=0;i<=n;i++){
        printf("\nIngrese la nota: %f:",i+1);
        scanf("%f",&a);  //the value of "a" will be random in each loop
        c+=a;
    }
    avg=c/n;
    printf("\nEl promedio es: %lf",avg);
    
    system("pause");
    return 0;
}
