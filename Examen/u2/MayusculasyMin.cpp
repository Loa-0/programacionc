#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]) {
	char cadena[]="Carrera Atletica del 19 Aniversario. Ven y participa.";
	int i=0,a=0,total=0,min=0,d=0;
	while(cadena[i]!='\0'){
		//if (isspace(cadena[i]))
		//{a++;}
		//<<cadena[i]<<endl;
		if(isupper(cadena[i])){
			total++;
		}
		else if(islower(cadena[i])
				   min++;
		else if(isdigit(cadena[i]))
			d++;
		i++;
	}
	if(a!=0){
		//cout<<"Hay "<<a+1<<" palabras"<<endl; 
		//cout<<"Hay "<<i<<" caracteres"<<endl; 
		cout<<"Hay "<<total<<" Mayusculas"<<endl; 	
		cout<<"Hay "<<min<<" Minusculas"<<endl; 
		cout<<"Hay "<<d<<" digitos"<<endl; 
	}
	system("pause");
	return 0;
}
