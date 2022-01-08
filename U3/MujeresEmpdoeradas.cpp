#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct Datos {
	int Numero;
	string Abre;
	string Nombre;
	char Capital[40];
	int Lada;
	int Tot_mun;
	int Hombres;
	int Mujeres;
} ciudades,mujercitas[100];
void mostrarEmp(Datos ciudades, int i) {
//<<ciudades[i].Numero<<"\t"<<ciudades[i].Abre<<"\t"<<ciudades[i].Nombre<<"\t"<<ciudades[i].Capital<<"\t"<<ciudades[i].Lada<<"\t"<<ciudades[i].Tot_mun<<"\t"<<ciudades[i].Hombres<<"\t"<<ciudades[i].Mujeres<<endl;
cout<<ciudades.Numero<<"\t"<<ciudades.Abre<<"\t"<<ciudades.Nombre<<"\t"<<ciudades.Capital<<"\t"<<ciudades.Lada<<"\t"<<ciudades.Tot_mun<<"\t"<<ciudades.Hombres<<"\t"<<ciudades.Mujeres<<endl;
}

int main(int argc, char *argv[]) {
	char cCadena[100];
	string sCadena;
	char *ptrToken;
	int i=0;	
	fstream archivo("ciudades.txt", ios::in);  //entrada(read)
	getline(archivo, sCadena);					// Encabezados
	while (archivo.eof()==false) {
		getline(archivo, sCadena);		
		strcpy(cCadena, sCadena.c_str());
		ptrToken = strtok(cCadena, "," );
		ciudades.Numero = atoi(ptrToken);
		
		ptrToken = strtok (NULL, "," );
		ciudades.Abre = ptrToken;				// string
		
		ptrToken = strtok (NULL, "," );
		ciudades.Nombre = ptrToken;
		
		ptrToken = strtok (NULL, "," );
		strcpy (ciudades.Capital, ptrToken);
		//ciudades[i].Capital = ptrToken;
		
		ptrToken = strtok (NULL, "," );
		ciudades.Lada = atoi(ptrToken);
		
		ptrToken = strtok (NULL, "," );
		ciudades.Tot_mun= atoi(ptrToken);
		
		ptrToken = strtok (NULL, "," );
		ciudades.Hombres= atoi(ptrToken);
		
		ptrToken = strtok (NULL, "," );
		ciudades.Mujeres= atoi(ptrToken);
		if (ciudades.Mujeres>ciudades.Hombres){
			mujercitas[i]=ciudades;
			mostrarEmp(mujercitas[i],i);
			i++;
		}
		mostrarEmp(ciudades,i);
		
		
	}	
	archivo.close();	
	fstream archivoW("mujeres.txt", ios::out); //out va escribir cosas  (guardar escribir	
	archivoW<<"IdCiudad"<<","<<"Abr"<<","<<"Nombre"<<","<<"Capital"<<","<<"Lada"<<","<<"Tot_mun"<<","<<"Hombres"<<","<<"Mujeres";		// Encabezado
	int r=i;
	for (int i=0;i<r;i++){
		archivoW<<endl;
		archivoW<<mujercitas[i].Numero<<","<<mujercitas[i].Abre<<","<<mujercitas[i].Nombre<<","<<mujercitas[i].Capital<<","<<mujercitas[i].Lada<<","<<mujercitas[i].Tot_mun<<","<<mujercitas[i].Hombres<<","<<mujercitas[i].Mujeres;
		}
	archivoW.close();
	cout<<endl<<endl<<"Done.."<<endl;
	system("pause");
	return 0;
}

