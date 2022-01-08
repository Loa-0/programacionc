#include <iostream>
// #include <stdio.h>
// #include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	char opcion='s';
	char leyenda[20];
	
	do {
		fflush(stdin);
		cout<<"Nombre: ";
		
//		gets(leyenda);      // Cadenas completas
//		cin >> leyenda;     // Toma hasta el espacio
//		cin.getline(leyenda, 20, '\n'); // Cadenas completas

		cout<<"\n"<<leyenda<<endl;
		cout<<"\nDeseas otra <s/n> ";
		cin>>opcion;
	} while (opcion != 'n');
	puts("Eso es todo . . .");
	system("pause");
	return 0;
}

