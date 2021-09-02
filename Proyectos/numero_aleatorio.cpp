#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

    cout << "ADIVINE EL NUMERO!!!!!!\n";
    int numero, dato, contador = 0;
    srand(time(NULL)); // esto generara un numero aleatorio
    dato = 1 + rand() % (100);
    do {
	cout << "Dijite un numero: "; cin >> numero;
	if (numero > dato) {
	    cout << "\nDijite un numero menor\n"; 
	}
	else if (numero < dato) {
	    cout << "\nDijite un numero mayor\n";
	}
	contador++;
    }while(numero != dato);

    cout << "\nFelicidades adivinastes el numero\n";
    cout << "Numero de intento: " << contador << "\n";

    system("pause");
    return 0;
}
