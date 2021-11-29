#include <iostream>
using namespace std;

int main() {
	int i, n;
	int calificacion[] = {10,9,7,8};
	string materia[4] = {"Prg", "Esp", "Ing", "Mat"};
	char caracter[]="Hola";
	char opcion ='S';
	
	cout << "Calificacion[2]: " << calificacion[2] << endl;
	
	cout << "Calificaciones:  " ;
	n = sizeof(calificacion)/sizeof(int);
	for (int i=0; i< n; i++) {
		cout << calificacion[i] << "\t";
	}
	cout<<endl<<endl;

	cout << "Un caracter especifico:     " << caracter[0] << endl;
	cout << "Todos los  caracteres :     " << caracter    << endl;
	
	cout << "Impresion de Cada Caracter: "; 
	i=0;
	while(caracter[i] != '\0' ) {		// '\0' = NULL
		cout << caracter[i] <<"\t";
		i=i+1;
	}
	cout<< endl<<endl;
	
	for (int i=0; i<4; i++ ){
		cout << materia[i]<< "\t";
		cout << calificacion[i] << endl;
	}
	
	system("pause");
	return 0;
}

