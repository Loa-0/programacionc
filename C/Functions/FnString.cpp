#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	char a[]="sida";
	string texto="Universidad UPA";
	
	cout << "Contenido:  " << texto << endl; 
	cout << "length:     " << texto.length() << endl;
	cout << "compare:    " << texto.compare("universidad") << endl;
	cout << "find:       " << texto.find(a) << endl;
	cout << "substr:     " << texto.substr(6,4) << endl;
	cout << "find_last:  " << texto.find_last_of("i") <<endl;
	cout << "replace:    " << texto.replace(6,5, "vih") << endl;
	texto = texto + ".";
	cout << "Concatenar: " << texto << endl;
	texto.clear();
	cout<< "Clear:       " << texto << endl;
	
	system("pause");
	return 0;
}

