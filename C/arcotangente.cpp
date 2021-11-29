#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
double r2g(double a){
	double r;
	r=(a*180)/3.1416;
return (r);
}

	
int main(int argc, char *argv[]) {
	double rad =0.7071;
	cout << "Arc Sin: "<< r2g(asin(rad));
	
	/*Archivos*/
	string filename("tmp.txt"),content, prueba;
	fstream file;
	file.open(filename, std::ios_base::app | std::ios_base::in);
	if (file.is_open())
	{
		//file << "Some random text to append." << endl;
		getline(file,content);
		cout << "\nDatos dentro del archivo:" << endl;
		while( !file.eof() ) {
			cout << content << endl;
			getline( file, content);
		}
		cout << "\nFin del Archivo\tDone !" << endl;
		cin>> prueba;
		file <<prueba<<endl;
	}
	else 
		{cerr << "Error  de apertura del archivo." << endl;}
	//
	return 0; 
	getchar();
}

