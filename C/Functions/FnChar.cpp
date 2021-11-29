#include <iostream>
using namespace std;

int main() {
	int i, contador;
	char letra='s';
	char texto1[50] = "Hola Amigo Mio";   // Es insertado el null \0
	char texto2[]= {'A','D','I','O','S','\0'};     

	i = 0;
	while (texto2[i] != '\0' ) {
		texto2[i] = tolower(texto2[i]);
		cout << texto2[i] << "\t";
		i++;
	}
	cout << endl<< endl;
	
	i = 0;
	contador =0;
	while (texto1[i] != '\0' ) {
		if (isspace(texto1[i])) {
			contador=contador + 1;
		} else if (islower(texto1[i])) {
			texto1[i] = toupper(texto1[i]);
		} else {
			texto1[i] = tolower(texto1[i]);
		}
		cout << texto1[i];
		i++;
	}
	cout << endl<< endl;
	cout << "Palabras: " << contador+1 << endl;
	
	system("pause");
	return 0;
}

