#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]) {
	char Nombre[32];
	char Calle[32];
	char Ciudad[27];
	char Provincia[27];
	char CodigoPostal[5];
	char Telefono[10];
	printf("\nNombre: "); gets(Nombre);
	printf("\nCalle: "); gets(Calle);
	printf("\nCiudad: "); gets(Ciudad);
	printf("\nProvincia: "); gets(Provincia);
	printf("\nCodigo Postal: "); gets(CodigoPostal);
    printf("\nTelefono: "); gets(Telefono);
	printf("\n\n%s \t %s\n",Nombre,Calle);
	printf("%s \t %s\n",Ciudad,Provincia);
	printf("%s \t %s\n",CodigoPostal,Telefono);	
	return 0;
}
 
