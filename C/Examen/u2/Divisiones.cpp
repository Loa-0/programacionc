#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int  x,y,cos=0;
	cout<<"Divisiones:\n";
	do{
		cout<<"Ingresa el primer valor: ";
		cin>>x;
		cout<<"Ingresa el segundo valor: ";
		cin>>y;
		if(y>x)
			cout<<"\nValores no validos no se puede dividir sobre un numero mas grande\n";
	} while(y>x);
	while(y<=x){
		cos++;
		x=x-y;
	}
	cout<<"\n\nResutlado de "<<x<<"/"<<y<<": Cosiente: "<<cos<<" Residuo: "<< x<<endl;
	return 0;
	system("Pause");
}

