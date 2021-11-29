#include <iostream>
#include<string.h>
#include "lib.h"
using namespace std;

int main(int argc, char *argv[]) {
	string texto="Universidad";
	cout<<"Contenido:  "<< texto<<endl;
	cout<<"Longitud:  "<< texto.length()<<endl;
	cout<<"compare:  "<< texto.compare("Universidad")<<endl;
	cout<<"find:  "<< texto.find("sida")<<endl;
	cout<<"substr:  "<< texto.substr(8,3)<<endl;
	cout<<"find_last:  "<< texto.find_last_of("i")<<endl;
	cout<<"replace:  "<< texto.replace(6,5, "VIH")<<endl;
	texto= texto+ ". Hola";
	cout<<"Concatenar:  "<< texto<<endl;
	texto.clear();
	cout<<"Limpiar:   "<<texto;
	clrscr();
	char text[50]="C:/UPA/ISC/3/PRG/FnString.png";
	string text1="C:/UPA/ISC/3/PRG/FnString.png";
	char *apt;
	apt= strrchr(text,'/');//substring apartir del caracter buscado 
	//	apt= text1.find_last_of("/");
	cout<<apt+1<<endl;
	apt= strtok(text, "/");
	int pos=0;	
	while(apt!=NULL){
		//strcpy(text[pos],apt);
	  //  printf("%s\n", apt);
		apt= strtok(NULL, "/");
		pos++;
	}
	cout<<"Directorios: " <<pos-1<<endl;	
	return 0;
}

