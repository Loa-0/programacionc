//Uriel Vazquez 3A
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float a=-1,f=1;
	while (a<0){
		cout<<"Ingresa un Numero se calculara el factorial: ";
		cin>>a;
		if (a<0){
			cout<<"Valor Invalido ingresa un numero positivo\n";
			system("Pause");
			system("cls");
		}
		else if(a==0)
		{cout<<"El factorial de "<<a<<" es: 1" <<endl;}
		else{
			for(int i=1;i<=a;i++){
				f=f*i;
			}
			cout<<"El factorial de "<<a<<" es: "<<f<< endl;
		}
	}
	return 0;
}

