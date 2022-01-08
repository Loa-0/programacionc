//Uriel Vazquez 3-A Introduccion a La Programacion
#include <iostream>
using namespace std;
int operaciones(int op){
	double a,b;
	enum operacion{Suma=1,Resta,Multiplicacion,Division};
	operacion selec;
	selec= (operacion) op;
	cout<<"\nQue valores utilizaremos?:\nValor 1: ";
	cin>>a;
	cout<<"\nValor 2: ";
	cin>>b;
	switch (selec){
	case Suma: cout<<"\nSumatoria: " << a<<"+"<<b<<"= "<<a+b; break;
	case Resta: cout<<"\nResta: " << a<<"-"<<b<<"= "<<a-b; break;
	case Multiplicacion: cout<<"\nMultiplicacion: " << a<<"x"<<b<<"= "<<a*b; break;
	case Division: cout<<"\nDivision: " << a<<"/"<<b<<"= "<<a/b; break;
	}
	cout<<"\n";
	system("Pause");
	return 0;
}
	int main(int argc, char *argv[]) {
		int op=-1;
		while((op<1||op>4)&&op!=0){
			cout<<"Menu,  Seleccione la opcion que desea elegir:\n";
			cout<<"1)Suma\n2)Resta\n3)Multiplicacion\n4)Division\nSalir 0\n";
			cin>>op;
			if (op==0)
			{cout<<"done\n";system("Pause");}
			else if (op>=1&&op<=4){ 
			operaciones(op); 
			op=-1;
			}
			else{
			cout<<"\nValor no valido, Selecciona un numero entre 1 y 4\n";
			system("Pause");
			}
			system("cls");
		}
		return 0;
	}
	
