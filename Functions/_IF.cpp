#include <cstdlib>
#include <iostream>
#include <conio.h>      // getch() , clrscr;
using namespace std;
int a = 294967290;

int main (int argc, char *argv[]) {  
	float c;
	
	printf("Ingrese la calificacion: ");
	scanf("%f", &c); 
	// Simple
	if (c >= 9.5)
		printf("Beca..\n");
	if (c == 10)
		printf("Excelencia..\n");
	
	
	// Compuesto
	if (c >= 7)
		printf("Aprobado\n");
	else
		printf("Reprobado\n");
	
	// Multiple
	if (c == 10) {
		printf("Excelente\n");
	}   
	else if (c >= 9) {
		printf("Muy Bien\n"); 
	}
	else if ( c >= 7) {
		printf("Si pasaste\n");
	}
	else {
		printf("Reprobaste\n"); 
	}
	
	// Anidado
	if (c > 7) {
		if (c>8) {
			if (c==9) printf("Permanencia\n");
			else 
				printf("Excelencia\n");
		} else {
			printf("No hay Beca\n");
		}
	}
	// Antigua
	if (c == 10) {
		printf("Excelent\n");
	}   
	else {
		if (c >= 9) {
			printf("Very good\n"); 
		}
		else {
			if ( c >= 7) {
				printf("Aproved\n");
			}
			else {
				printf("failed\n"); 
			}
		}
	}
	
	// If Lineal
	string a = (c > 7) ? "Bien" : "Mal" ;
	cout<<a<<endl;
	
	printf ("\n\n. . . H e c h o \n");     
	getch();
	// system("PAUSE");
}


