#include <iostream>
#define PI 3.1416
using namespace std;

// Comentarios de una linea 

/* Comentarios
    de bloques
*/

const float pi = 3.1415;     // Variables Globales 

int main() {
	short int i = -32768;			// -32768..32767    2^15 -1  2bytes 
	unsigned short int a = 65535; 	// 0..65535         2^16 -1  2bytes	
	int n = -2147483648;
	long int d = -2147483648;	
	long long int f = 9223372036854775807;
	float peso  = 20.5f;
	double masa = 21.5;
	bool bandera= true;
	bool sn = 1;   	// sn > 0 por lo tanto true
	
	char opcion = 's';
	string turno = "Nocturno";
	
//	int calificacion[4];
//	int calificacion[4]= {10,8,9,7};
	int calificacion[]=  {10,8,9,7};
	string materia[]= {"Programacion", "Español", "Ingles", "Algebra"};
	char carrera[30] = "Sistemas";		//   '\0' = NULL
	char saludo[] = {'A','D','I','O','S','\0'};
	char mes[][20]= {"","Enero", "Febrero", "Marzo", "Abril"};  
	enum Dia {dom=1,lun, mar, mie, jue, vie, sab } dia; // default = 0
	
	cout << "Calificacion[2]: " << calificacion[2] << endl;
	cout << "Materia[2]: " << materia[2] << endl;
	cout << "Mes[2]: " << mes[2] << endl;
	

	dia = sab;
	cout << "dia: " << dia << endl;
	
	n = 65;
	opcion = n;
	cout << "Caracter: " << opcion << endl;
	
	opcion = 'B';
	n = opcion;
	cout << "Ascii: " << n << endl;
	
	system("pause");
	return 0;
}

