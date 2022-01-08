#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	int pos=0;
	char *apt;
	string sPalabras[10];			
	char   cPalabras[10][20];
	
	char texto[100] = "Universidad Politenica de Aguascalientes";
	
	
	
	strcat(texto, " la mejor");		// concatenar
	cout << texto << endl;
	
	apt = strchr(texto, ' ');	// substring a partir del caracter    
	cout << "strchr:  " << apt+1 << endl; 

	apt = strrchr(texto, ' ');	// substring a partir del ultimo caracter    
	cout << "strrchr: " << apt+1 << endl; 
	
	pos = strcmp("jose", "armando"); // 0= c1=c2  1= c1>c2  -1= c1 < c2
	cout << "strcmp:  " << pos  << endl;	// stricmp  ignora may y min
	
	strcpy(texto, "Ingenieria en Sistemas Computacionales");  // copy 
	cout << "strcpy:  " << texto << endl;

	cout << "strlen:  " << strlen(texto) << endl;	// longitud de la cadena
	
	cout << "strstr:  " << strstr(texto, "tema") << endl; // substring a partir de la cadena
	
	cout << endl << texto << endl;
	cout << "Token:   " << endl << endl;
	apt = strtok( texto, " " );
	pos =0;
	/* continua la division en tokens, hasta que ptrToken se hace NULL */
	while ( apt != NULL ) {
		sPalabras[pos] = apt;
		strcpy(cPalabras[pos], apt);
//		printf("%s\n", cPalabras[pos]);
//		printf("%s\n", sPalabras[pos].c_str());
//		printf("%s\n", apt );
		cout << apt << endl;
		apt = strtok( NULL, " " ); /* obtiene el siguiente token */
		pos++;		
	}	
	cout << endl;
	
	system("pause");
	return 0;
}

