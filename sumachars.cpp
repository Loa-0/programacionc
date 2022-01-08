#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
//	char *cCadena = valor.c_str();
	char *apt;
	int num;
	//cout<<"Ingresa Un valor: ";
	char  cNumero[10]="123";	
	int i=0;
	while( cNumero[i]!= '\0') {
		cout << cNumero[i]<<endl;
		num= cNumero[i]-48;
		atoi(num);
		cout <<endl<< i<<") int:    " << num <<endl;
		i++;
	}
	
	return 0;
}

