#include <stdio.h>		// printf
#include <stdlib.h>		// system("cls");

int main(int argc, char *argv[]) {
	
	enum colores { Verde=1, Amarillo, Rojo};	
	colores semaforo=Amarillo;
	int opcion =5;
	char letra='b';
	double pi = 3.1416;
	int entero;
	
	entero = (int) pi;
	semaforo = (colores) opcion;
	
	switch (semaforo) {
	case Verde: printf("Es verde\n");
		break;
	case Amarillo:
		printf("Es Amarillo\n");
		break;
	case Rojo: printf ("Es Rojo\n");
		break;
	default:
		printf ("Que color es :\n");
	}
	
	switch (letra) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf ("Es vocal \n");
		break;
	default:
		printf ("Es consonante \n");
	}
	
	switch (opcion) {
	case 1:
		printf("Opcion 1 \n");
		break;
	case 2:
		printf("opcion 2 \n");
		break;
	default:
		printf("Solo 1 o 2 \n");
	}
		
	getchar();
	return 0;
	
}

