/*
INSTITUTO TECNOLOGICO DE TIJUANA
CHAVEZ ARROYO MAURICIO
NO.CONTROL: 18212159
/*
/*36.-Calcular z de acuerdo con la formula siguiente.
Asignar las variables numericas aprobadas.
Sean a = 4, b = 6, x = 8, y = 2, c = 5 cuando
corra su programa.
/*
#include "pch.h"
#include <iostream>
using namespace std;
int a = 4, b = 6, x = 8, y = 2, c = 5,z;
int main()
{
	z = (((a + b) ^ 3) - ((x + y) ^ 2)*((a - c) ^ 4) + ((1 / 2)(c + x)));
	cout << "Z es igual a=" << z;
}
