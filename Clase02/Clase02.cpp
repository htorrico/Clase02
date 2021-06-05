// Clase02.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <random>

using namespace std;

int ingresarCantidad() {
	int x;
	do {
		cout << "Ingrese la cantidad de elementos del vector: ";
		cin >> x;
	} while (x < 0 || x>60);
	return x;
}

void ingresarElementos(int v[], int n) {
	for (int i = 0; i < n; i++)
	{
		v[i] = rand();
		//_sleep(70);
	}
}

void ordenarPar(int* v, int n) {
	int x = n / 2;
	for (int i = 0; i < x - 1; i++)
	{
		for (int j = i + 1; j < x; j++)
		{
			if (v[i] > v[j]) {
				int aux;
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	for (int i = x; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++) {
			if (v[i] < v[j]) {
				int aux;
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

void mostrarDatos(int* v, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << " [" << v[i] << "] ";
	}
	cout << endl;
}

void ordenarImpar(int* v, int n) {
	int x = n / 2 + 1;
	for (int i = 0; i < x - 1; i++)
	{
		for (int j = i + 1; j < x; j++)
		{
			if (v[i] < v[j]) {
				int aux;
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	//ordenando de forma descendente la segunda mitad
	for (int i = x; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (v[i] > v[j]) {
				int aux;
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}


int main()
{
	int* digitos = new int[4];

	digitos[0] = 1;
	digitos[0] = 3;
	digitos[0] = 6;
	digitos[0] = 9;


	int tamano = 0;
	//Ingresar tamaño	
	cout << "Ingresar tamano de la cadena\n";
	cin>> tamano;
	int* cadena = new int[tamano];

	//Guardar los digitos de la cadena
	for (int i = 0; i < tamano; i++)
	{
		int digito = 0;
		cout << "Ingresar digito [" << i <<"] = ";
		cin >> digito;

		cadena[i] = digito;
	}

	//Mostrar los digitos de la cadena

	for (int i = 0; i < tamano; i++)
	{
		if (i + 1 == tamano)
			cout << cadena[i];
		else
			cout << cadena[i] << "-";

	}

	






   /* int n;
	n = ingresarCantidad();
	int* v = new int[n];
	ingresarElementos(v, n);
	mostrarDatos(v, n);
	if (n % 2 == 0)
		ordenarPar(v, n);
	else
		ordenarImpar(v, n);
	cout << " Vector Ordenado " << endl;
	mostrarDatos(v, n);
	int c = 1, pos = 0;*/


	
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
