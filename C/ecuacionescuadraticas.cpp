//Uriel Vazquez 3A
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[]) {
	double a,b,c,res;
	char vali;
	do {
		system("cls");
		cout<<"Resolucion de ecuaciones cuadraticas\n\nFormato ax^2 + bx + c = 0\nInserte 'a': ";
		cin>>a;
		cout<<"Inserte 'b': ";
		cin>>b;
		cout<<"Inserte 'c': ";
		cin>>c;
		cout<<"Su ecuacion es "<<a<<"(x^2)+("<<b<<")x+("<<c<<")\npara continuar presione 'Y', para salir cualquier otra letra:  ";
		cin>>vali;		
	} while(vali!='Y'&&vali!='y');
	if((sqrt(((b)*(b)) - (4*a*c)))>0){//Comprovacion de Raiz Negativa
		//Resolviendo con formual general x=(-(b)+/-sqrt((b)^2 -4(a)(c))) /2(a)
		res = ((-1*(b))+(sqrt(((b)*(b)) - (4*a*c))))/(2*a);
		cout<<"\n\nEl resultado x1: "<<res<<"\npor lo que\n\n";
		cout<<a<<"("<<res<<"^2)+("<<b<<"*"<<res<<")+("<<c<<") = 0 ";
		res = ((-1*(b))-(sqrt(((b)*(b)) - (4*a*c))))/(2*a);
		cout<<"\n\nEl resultado x2: "<<res<<"\npor lo que\n\n";
		cout<<a<<"("<<res<<"^2)+("<<b<<"*"<<res<<")+("<<c<<") = 0 ";
	}
	else{
		cout<<"\nDentro de la Formula se detecto una raiz negativa por lo que se usaran nuemros complejos tomando i=sqrt(-1)"<<endl; 
		double q = sqrt(((b*b) - (4*a*c))*(-1));//Covertir Raiz Negativa a Positiva
		res =((-1)*b)/(2*a);//Resolucion En terminos Simplificados 
		cout<<"x1= "<<res<<" + "<<q/(2*a)<<"i"<<endl;
		cout<<"x2= "<<res<<" - "<<q/(2*a)<<"i"<<endl;
	}		
	return 0; 
}


