//Uriel Vazquez 3A
#include <iostream>
using namespace std;
double factorial(double a){
	double f=1;
	for(int i=1;i<=a;i++){
		f=f*i;
	}
	//cout<<"El factoraial de "<<a<<" es: "<<f<< endl; //Prueba de Factorial correcto.
	return f;
}
	int main(int argc, char *argv[]) {
		double n;
		double e=1;//se le inicializa en 1 por factorial no calculado de manera autoamtica de 1/0!
		cout<<"Se calculara la ecuacion de euler dode e=Sumatoria de (1/n!)"<<endl;
		cout<<"Ingresa n, para calcular la aproximacion: ";
		cin>>n;
		//Sumatoria
		for (int i=1;i<=n;i++)
		{
			e=e+(1.0/factorial(i));//(suamtoria de los resultados previos)+(calculode 1/n!)
			//cout<<e<<endl;// prueba de division correcta
		}
		//cout<<"El valor de e oficial es 2.7118281828"<<endl;
		cout<<"El calculo con "<< n <<" es "<<e <<endl;
		system("pause");
		return 0;
	}
