#include <iostream>
using namespace std;

// Impresion de Impares 1..10
int main(int argc, char *argv[]) {

	cout << "ciclo for impares " << endl;
	for (int i=1; i<=10; i++ ) {
		if (i % 2 == 0) {
			// par 
			continue; // arriba
			// break; // abajo
		} else {
			cout << i << endl;
		}
		cout << ".." <<"\n"<< endl;
	}

	cout << "ciclo for pares" << endl;
	for (int i=2 ; i<=10; i=i+2) {
		cout << i << endl;
	}
	cout << endl << endl;
	

	cout << "ciclo while pares" << endl;
	int i=2;
	while (i<=10) {
		cout << i << endl;
		i=i+2;
	};
	cout << endl << endl;	
	
	cout << "ciclo do while pares" << endl;
	i=2;
	do {
		cout << i << endl;
		i=i+2;
	} while (i<=10);
	
	getchar();
	return 0;
}

