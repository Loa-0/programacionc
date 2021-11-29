//Capturar string numerico, suma de lso digitos
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
int main(int argc, char *argv[]) {
	string valor;
	int numero =0;
	char *cCadena;
	char *apt;
	cout<<"Ingresa Un valor: ";
	cin>>valor;
	fflush(stdin);
	*cCadena = valor.c_str();
	apt= strtok(cCadena, " ");
	int pos=0;	
	while(cCadena!=NULL){
		//numero=atoi(cCadena[pos]) + numero ;
		cout<<endl<<"Numero: "<<numero;
		apt= strtok(NULL, " ");
		pos++;
	}
	cout<<endl<<"Numero: "<<numero;
	return 0;
}

