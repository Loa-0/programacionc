#include <iostream>
#include<string>
using namespace std;
int canti[]={1000,500,200,100,50,20,10,5,2,1};
void imprCambio(int vec[20], int lon){
	for(int i=0;i<lon;i++){
		if  (vec[i]!=0){
			if (canti[i]>=10)
				cout<<endl<<vec[i]<<" Billetes de "<<canti[i];
			else 
				cout<<endl<<vec[i]<<" Monedas de "<<canti[i];
		}
	}
}
int main(int argc, char *argv[]) {
	char salir;
	int i=0,val;
	
	do{
		system("cls");
		i=0;
		int cant2[10]={0};
		cout<<"Ingresa la cantidad: ";
		cin>>val;
		while(val!=0){
		cant2[i] = val/canti[i];
		val = val%canti[i];
		i++;
		}
	imprCambio( cant2,10);
	cout<<endl<<endl<<"Para salir presiona s: ";
	cin>>salir;
	salir= tolower(salir);
	}while (salir!='s');
	return 0;
}











