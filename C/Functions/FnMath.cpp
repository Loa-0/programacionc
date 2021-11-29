#define _USE_MATH_DEFINES
#define PI 3.1416

#include <iostream>
#include <cmath>
#include <iomanip>

// Las pc's manejan radianes

using namespace std;

int main(int argc, char *argv[]) {
	double a = 45;
	double b = 0.7071;
	double c = PI/4;	// 45º

	cout<< PI << endl;
	cout << M_PI << endl;

	cout <<endl <<"Divisiones" << endl;
	float residuo = fmod(7,2);
	cout << residuo << endl;
	cout << 7%2 << endl;
	cout << "Cociente: "<< 7/2 << endl;
	cout << "Cociente: "<< (int) 7.0/2 << endl; // casting
	div_t cr; 
	cr = div (7,2);
	printf ("%d, remainder %d.\n\n", cr.quot, cr.rem);

	cout << "Sen 45º = " << sin(c) << endl;
	cout << "arcSen 0.7071 = " << asin(b) << endl;
	cout << "0.7854rad a Grados: " << 0.7854*180/PI << endl<<endl;
	
	cout << "cadena a numero" << endl;
	cout << atof("3.5")+1 << endl;	// cadena a float
	cout << atoi("100")+1 << endl;	// cadena a entero

	srand (time(NULL));		// Generador de Semilla	
	cout << "Aleatorio: "<< 21 + rand()%10 << endl; // [21..30]
	system("pause");
	return 0;
}
