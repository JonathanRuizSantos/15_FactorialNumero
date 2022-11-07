#include <iostream>

/* Programa que calcula el factorial de un numero introducido por el usuario */

/*
El factorial de un número entero positivo se define como el producto de todos
los números naturales anteriores o iguales a él.
*/

using namespace std;
int main(int argc, char** argv) {
	int numero, factorial = 1;
	cout<<"CALCULANDO EL FACTORIAL DE UN NUMERO"<<endl<<endl;
	
	do{
		cout<<"Ingresa un numero entero: ";
		cin>>numero;
	}while(numero <= 0);
	
	for(int i = 1; i<=numero; i++){
		factorial*=i;
	}
	cout<<"__________________________________________"<<endl;
	cout<<"Factorial de "<<numero<<" = "<<factorial<<endl<<endl;
	
	system("PAUSE");
	return 0;
}