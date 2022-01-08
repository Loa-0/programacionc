#include <iostream>
#include<string.h>
#include "lib.h"
using namespace std;

int main(int argc, char *argv[]) {
	char *apt;
	string sPalabras[10];
	char cPalabras[10][20];
	char texto[100]="Universiddad Politecnica de Aguasclaientes";

	strcat(texto," La mejor");//Concatenar
	cout<<texto<<endl;
	
	
	apt= strchr(texto,' ');//substring apartir del caracter buscado 
	cout<<apt<<endl;
	
	int pos= strcmp("Jose","Armando");//0: c1=c2  1=c1>c2  -1: c1<c2 
	cout<<pos<<endl;
	
	strcpy(texto, "Ingenieria en Sistemas Computacionales");//cOPIA
	cout<<texto<<endl;
		
	cout<< strlen(texto)<<endl;//longitud
	
	cout<< strstr(texto,"tema")<<endl;//Buscador en String 
	
	cout<<endl<<"Token: "<<endl<<endl;
	apt= strtok(texto, " ");
	pos=0;	
	while(apt!=NULL){
		sPalabras[pos]=apt;
		strcpy(cPalabras[pos],apt);
		printf("%s\n", apt);
		
		apt= strtok(NULL, " ");
		pos++;
	}
	
	
	//pos= strncmp("Jose","Armando", size_t 4); 
	//cout<<pos<<endl;
	return 0;
}

