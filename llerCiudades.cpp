#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int mun[32]={0};
struct Datos {
	int IdCiudad;
	string Abreviatura;
	string Nombre;
	int  Municipios;
	int  Localidades;
	int Estatus;
} Edo;

void mostrarEmp(Datos persona) {
	cout<<Edo.IdCiudad<<"\t"<<Edo.Abreviatura<<"\t"<<Edo.Nombre<<"\t\t"<<Edo.Municipios<<"\t"<<Edo.Localidades<<"\t"<<Edo.Estatus<<endl;
     //printf("%2d %6s %30s %d %d %d \n",Edo.IdCiudad,Edo.Abreviatura,Edo.Nombre,Edo.Municipios,Edo.Localidades,Edo.Estatus);
}

int main(int argc, char *argv[]) {
	int sum=0,aux=0;
	char cCadena[100];
	string sCadena,mayor;
	char *ptrToken;
	fstream archivo("Ciudades.txt", ios::in);
	getline(archivo, sCadena);					// Encabezados
	cout<<sCadena<<endl;
	while (archivo.eof()==false) {
		fflush(stdin);
		getline(archivo, sCadena);		
		strcpy(cCadena, sCadena.c_str());
		
		ptrToken = strtok(cCadena, "," );
		Edo.IdCiudad = atoi(ptrToken);
		
		ptrToken = strtok (NULL, "," );
		//strcpy (Edo.Abreviatura, ptrToken);			// char
		Edo.Abreviatura=ptrToken;
						
		ptrToken = strtok (NULL, "," );
//		strcpy (Edo.Nombre, ptrToken);
		Edo.Nombre=ptrToken;
		
		ptrToken = strtok(NULL, "," );
		Edo.Municipios = atoi(ptrToken);
		if (Edo.Municipios>aux){
			aux=Edo.Municipios;
			mayor=Edo.Nombre;
		}
		sum+=Edo.Municipios;
		
		ptrToken = strtok(NULL, "," );
		Edo.Localidades = atoi(ptrToken);
		
		ptrToken = strtok(NULL, "," );
		Edo.Estatus = atoi(ptrToken);
		
		//if (Emp.Numero == 2) {
		mostrarEmp(Edo);  
		//}
	}	
	archivo.close();
	cout<<"Total de Municipios: "<<sum<<endl;
	cout<<"Mayor Cantidad de Municipios: "<<mayor<<endl;
	
	system("pause");	
	return 0;
}

