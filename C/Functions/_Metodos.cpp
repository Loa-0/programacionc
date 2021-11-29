#include <iostream>
#include <cmath>
#include "tools\lib.h"

using namespace std;
int a;

double G2R(double a) {
	double r;
	r = a * 3.1416 / 180;
	return r;
}

double R2G(double a) {
	double r;
	r = a * 180/3.1416;
	return r;
}

int sumarV(int dato[], int m){
	int r=0;
	for (int i=0;i<m;i++) {
		r=r+dato[i];
	}
	return r;
}
	
void tabla( int n) {
	int i;
	printf("\n");
	for (i=1;i<=10;i++) {
		if (i != 6) {
			cout << n<<" x "<<i<< " = "<< n*i ;
			if (i % 2 == 0) 
				cout << " Es Par" ;
			else 
				cout << " Es impar";
			cout <<endl;
		} 
	}
	cout << i << endl << endl;
}

int main(int argc, char *argv[]) {
	double a = 45;
	double b = 0.7071;
	double r;
	int v[5]={50,40,10,30,20};
	
	char cadena[40] ="Hola mundo cruel\n\n";
	int x = (80 - strlen(cadena)) / 2; 
	gotoxy(x,5); printf (cadena);
	
	int n = sizeof (v) / sizeof(int);
	cout <<"Renglones: " << n << endl;
	
	cout << "ceil: "<<ceil(a) << endl;
	cout << "log: " <<log(a) << endl;
	
	r = G2R(a);
	cout << "sin:    " << sin(r) << endl;
	cout << "ArcSin: " << R2G(asin(b)) << endl;
	
	tabla(5);
	r = sumarV(v, n );
	cout << "Suma Vector: " << r << endl;
	
	r = _suma(6,7);
	cout << r;

	gotoxy(70,5);
	cout << "FIN";
	
	getchar();
	return 0;
}

	
