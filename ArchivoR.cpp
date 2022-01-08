#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Datos {
	int Numero;
	char Nombre[20];
	// string Nombre;
	char Sexo;
} Emp;

void mostrarEmp(Datos persona) {
	cout<<Emp.Numero<<"\t"<<Emp.Nombre<<"\t"<<Emp.Sexo<<"\t"<<endl;
}

int main(int argc, char *argv[]) {
	
	char cCadena[100];
	string sCadena;
	char *ptrToken;

	fstream archivo("datos.txt", ios::in);
	getline(archivo, sCadena);					// Encabezados
	cout<<sCadena<<endl;
	while (archivo.eof()==false) {
		getline(archivo, sCadena);		
		strcpy(cCadena, sCadena.c_str());

		ptrToken = strtok(cCadena, "," );
		Emp.Numero = atoi(ptrToken);

		ptrToken = strtok (NULL, "," );
		strcpy (Emp.Nombre, ptrToken);			// char
		// Emp.Nombre = ptrToken;				// string

		ptrToken = strtok (NULL, "," );
		Emp.Sexo = ptrToken[0];

		//if (Emp.Numero == 2) {
			mostrarEmp(Emp);  
		//}
	}	
	archivo.close();
	
	system("pause");	
	return 0;
}

