/*
INSTITUTO TECNOLOGICO DE TIJUANA
CHAVEZ ARROYO MAURICIO
NO.CONTROL: 18212159
*/
/*
39.-Dados diez enteros, imprimir solo el mayor.
No suponer que los numeros estan enlistados en los datos de
una orden especial.Puede suponerse que no hay dos numeros iguales.
*/

#include <iostream>
using namespace std;
int main() 
{
	int cantidad(10);
	int numero(0);
	int menor(0);
	int mayor(0);
	float suma(0.0f);
	for (int cont(1); cont <= cantidad; ++cont) {
		cout << "num " << cont << " = ";
		cin >> numero;
		if (cont == 1) {
			menor = numero;
			mayor = numero;
		}
		else if (numero < menor) {
			menor = numero;
		}
		else if (numero > mayor) {
			mayor = numero;
		}
		suma += numero;
	}
	cout << "----------------\n"
		<< "mayor = " << mayor << endl;
	return 0;	
}
