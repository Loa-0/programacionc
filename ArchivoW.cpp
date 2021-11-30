#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	struct Datos {
		int Numero; 
		char Nombre[20];
		// string Nombre;
		char Sexo;
	} Emp;
	
	fstream archivo("datos.txt", ios::out);
	
	cout <<"Numero <0 Salir> : " << endl;
	scanf  ("%d", &Emp.Numero);
	archivo<<"Numero"<<","<<"Nombre"<<","<<"Sexo";		// Encabezado
	while (Emp.Numero !=0) {
		archivo<<endl;
		fflush(stdin);					// vacía el bufer de lectura
		printf("Nombre: ");
		gets(Emp.Nombre);				// Captura char,   Permite Espacios
		// getline(cin, Emp.Nombre);	// Captura string, Permite Espacios
		
		do {							// Valida Sexo[H,h,M,m]
			printf ("Sexo <H/M> : ");
			scanf ("%s", &Emp.Sexo);
		} while (toupper(Emp.Sexo) != 'H' && toupper(Emp.Sexo) !='M');
		
		archivo<<Emp.Numero<<","<<Emp.Nombre<<","<<Emp.Sexo;
		
		printf ("\n\n");          
		printf ("Numero <0 Salir> : ");
		scanf  ("%d", &Emp.Numero);
	}
	archivo.close();
	
	system("pause");
	return 0;
}

