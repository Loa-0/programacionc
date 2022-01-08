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
} ciudades[100],dat1,dat2;

	void mostrarEmp(Datos ciudades[100], int j) {
		for (int i=0;i<j;i++){
		cout<<ciudades[i].Numero<<"\t"<<ciudades[i].Abre<<"\t"<<ciudades[i].Nombre<<"\t"<<ciudades[i].Capital<<"\t"<<ciudades[i].Lada<<"\t"<<ciudades[i].Tot_mun<<"\t"<<ciudades[i].Hombres<<"\t"<<ciudades[i].Mujeres<<endl;
		}
	}

void ordenarDatos(Datos ciudades[100],int r){
	string aux,aux2;
	for(int i=0;i<r-2;i++){
		for (int j=0;j<=r-2;j++){
			aux=ciudades[j].Abre;
			aux2=ciudades[j+1].Abre;
			dat1=ciudades[j];
			dat2=ciudades[j+1];
			if(aux.compare(aux2)>0){
				ciudades[j].Abre=aux2;
				ciudades[j]=dat2;
				ciudades[j+1].Abre=aux;
				ciudades[j+1]=dat1;
				//cout<<aux<<" aux2:  "<<aux2<<endl;
			}
		}
	}
}
	
void escribirArchivo(Datos ciudades[100],int r){
	fstream archivoW("ciudadesdaCiudad.txt", ios::out); //out va escribir cosas  (guardar escribir	
	archivoW<<"IdCiudad"<<","<<"Abr"<<","<<"Nombre"<<","<<"Capital"<<","<<"Lada"<<","<<"Tot_mun"<<","<<"Hombres"<<","<<"Mujeres";		// 
	for (int i=0;i<r;i++){
		archivoW<<endl;
		archivoW<<ciudades[i].Numero<<","<<ciudades[i].Abre<<","<<ciudades[i].Nombre<<","<<ciudades[i].Capital<<","<<ciudades[i].Lada<<","<<ciudades[i].Tot_mun<<","<<ciudades[i].Hombres<<","<<ciudades[i].Mujeres;
	}
	archivoW.close();
	cout<<endl<<endl<<"Done.."<<endl;
}
	int lecturaArchivos(){
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
			ciudades[i].Numero = atoi(ptrToken);
			
			ptrToken = strtok (NULL, "," );
			ciudades[i].Abre = ptrToken;				// string
			
			ptrToken = strtok (NULL, "," );
			ciudades[i].Nombre = ptrToken;
			
			ptrToken = strtok (NULL, "," );
			strcpy (ciudades[i].Capital, ptrToken);
			//ciudades[i].Capital = ptrToken;
			
			ptrToken = strtok (NULL, "," );
			ciudades[i].Lada = atoi(ptrToken);
			
			ptrToken = strtok (NULL, "," );
			ciudades[i].Tot_mun= atoi(ptrToken);
			
			ptrToken = strtok (NULL, "," );
			ciudades[i].Hombres= atoi(ptrToken);
			
			ptrToken = strtok (NULL, "," );
			ciudades[i].Mujeres= atoi(ptrToken);
			i++;
			//mostrarEmp(ciudades,i);
		}	
		archivo.close();		
		return i;
	}
	
int main(int argc, char *argv[]) {
	int i =lecturaArchivos();
	ordenarDatos(ciudades,i);
	mostrarEmp(ciudades,i);
	escribirArchivo(ciudades,i);
	system("pause");
	return 0;
}



