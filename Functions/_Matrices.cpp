#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <windows.h>		// Sleep
using namespace std;		// Permite usar cin cout	
#define N 10
#define F  2
#define C  3

int main(int argc, char *argv[]) {
	
	int datos1[N]={0};		// inicializar vector
	int datos2[] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };

	int arreglo1[ 2 ][ 3 ] = {0};
	int arreglo2[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int arreglo3[ F ][ C ];
	char estaciones[4][10]={"Primavera", "Verano", "Otoño", "Invierno"};
	
	printf("\nImpresion de Vector\n");
	for (int i=0; i<N ; i++) {
		printf ("%d\t", datos2[i] );
	}
	
	printf("\nImpresion de Matrices\n");
	for (int i=0; i<2 ; i++) {
		for (int j=0; j<3 ; j++) {
			printf ("%d\t", arreglo2[i][j] );
		}
		putchar('\n');
	}
	
	printf("\nImpresion de Estaciones\n");
	for (int i=0; i<4 ; i++) {
		printf ("%s\n", estaciones[i] );
	}
	

	printf("\nImpresion de Matrices Con Numeros Aleatorios\n");
	srand (time(NULL));							// Generador de Semilla
	for (int i=0; i<F ; i++) {
		for (int j=0; j<C ; j++) {
//			[ m .. n] 							// Rango de valores
//			num = rand()%(n-m+1) + m 			// Cual es el rango?	
			arreglo3[i][j] = rand()%(10)+21;
			printf ("%d\t", arreglo3[i][j] );
			Sleep(1000);
		}
		putchar('\n');
	}
	
	putchar('\n');
	system("pause");
}

