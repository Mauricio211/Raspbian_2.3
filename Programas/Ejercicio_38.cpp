/*
INSTITUTO TECNOLOGICO DE TIJUANA
CHAVEZ ARROYO MAURICIO
NO.CONTROL: 18212159
*/
/*
38.-Introducir 12 valores de A y 10 de B.Calcular la suma de 
los valores A, la de los B,y la suma de los productos AB.
*/
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int A(12);
	int B(10);
	int numeroA(0);
	int numeroB(0);
	float sumaA(0.0f);
	float sumaB(0.0f);
	float AB(0.0f);
	for (int contA(1); contA <= A; ++contA)
	{
		cout << "num " << contA << " de A = ";
		cin >> numeroA;
		
		sumaA += numeroA;
	}
	cout << "----------------\n";
	for (int contB(1); contB <= B; ++contB)
	{
		cout << "num " << contB << " de B = ";
		cin >> numeroB;
		sumaB += numeroB;
	}
	AB = sumaA + sumaB;
	cout << "----------------\n"
		<< "Suma de los valores de A = " << sumaA << endl
	    << "Suma de los valores de B = " << sumaB << endl
		<< "Suma de los productos de AB = " << AB << endl;
	return 0;
}
