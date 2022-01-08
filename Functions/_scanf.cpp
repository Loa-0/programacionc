#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	char opcion[2]="s";
	char opc='s';
	char leyenda[20];

	do {
		fflush(stdin);
		printf("\nNombre: ");
//		scanf("%[A-Z0-9 a-z]c", leyenda);		
		scanf("%s", leyenda);		
		
		printf("%s", leyenda);
		printf("\nDeseas otra <s/n> ");
//		scanf("%s", opcion);
		scanf("%s", &opc);
//	} while (strcmp(opcion, "n"));  // mientras sea diferente de n
	} while (opc == 's');

	system("pause");
	return 0;
}

/*
El símbolo & (ampersand) indica, el calculo de la dirección, donde se almacenará la variable. 
Este operador es indispensable para cualquier tipo de variable, 
excepto para cadenas de caracteres (aún cuando si se puede incluir).
*/
