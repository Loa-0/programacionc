#include <iostream>
// #include <sstream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {
	int iNumero=123;
	char cNumero[]="123";
	char cNumero2[10]="123";
	string sNumero= "123";
	int n = sNumero.length();
	char cArray[50];
	
	// char to int		atof("-5.85") devuelve -5.85
	iNumero= atoi(cNumero) + 1;
	cout << "char   to int:    " << iNumero <<endl;

    // string to int		
	iNumero = stoi(sNumero) + 1;
	cout << "string to int:    " << iNumero << endl;
	 
	// int to string
	sNumero = to_string(iNumero);
	std::cout <<"int    to string: " <<sNumero  << endl;	
	
	// int to char
	printf(cNumero, "%d", iNumero);
	cout << "int    to char:   "  << cNumero << endl;
	
	// string to char
	strcpy(cArray, sNumero.c_str());
	cout <<"String to char:.  "<<cArray << endl;
	
	// string to char
	char const  *cCadena = sNumero.c_str();
	char* cCadena2 =  &sNumero[0];
	
	cout <<"String to char:_  "<<cCadena << endl;
	printf("String to char:_  %s \n", cCadena);
	
	cout<<endl;
	cout << "lenght: " ;
	for (unsigned int i=0; i < sNumero.length(); i++ ){
		cArray[i] = sNumero[i];
		cout << cArray[i];
	};
	
	cout << "\nNULL: " ;
	int i=0;
	while( cArray[i] != '\0') {
		cout << cArray[i];
		i++;
	}
	
	cout << "\ncArray: " << cArray  <<endl;

	sNumero= sNumero + sNumero;
	cout << sNumero<< endl;
	
	strcat(cNumero2,"456");
	cout << cNumero2<< endl;
	
	system("pause");
	return 0;
}

