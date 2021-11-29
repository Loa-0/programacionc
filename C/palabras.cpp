#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]) {
	char cadena[]="Hola amigos insEPArarables Por siempre";
	int i=0,a=0,total=0;
	char hola[30];
	while(cadena[i]!='\0'){
		if (isspace(cadena[i]))
		{a++;}
		//<<cadena[i]<<endl;
		if(isupper(cadena[i])){
			total++;
		}
		i++;
	}
	if(a!=0){
		cout<<"Hay "<<a+1<<" palabras"<<endl; 
		cout<<"Hay "<<i<<" letras"<<endl; 
		cout<<"Hay "<<total<<" Mayusculas"<<endl; 	
		cout<<"Hay "<<i-total<<" Minusculas"<<endl; 
		
	}
	cout<<"\n\nValores para char ejemplos"<<endl;
	scanf("%s",hola);
	printf("%s \n",hola);
	printf("%s Longitud: %d \n",hola,sizeof(hola)/sizeof(char));
	int longitud = sizeof(hola)/sizeof(char);//regla general dividirsobre le tipo de caracter para poder sacar la longitud 
	system("pause");
	return 0;
}

