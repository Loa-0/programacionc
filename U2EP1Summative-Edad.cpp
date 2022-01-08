//Uriel Vazquez 3A
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad=-1;
	while(edad!=0){
		cout<<"Ingresa la edad, Se ponderara en que categoria entra para salir ingresa 0"<<endl;
		cout<<"Edad: ";
		cin>>edad;
		cout<<edad;
		if (edad<0)
		{cout<<" Edad no existente";}
		else if (edad==0)
		{cout<<" Done!";}
		else if (edad>=1&&edad<=30)
		{cout<<" First Age";}
		else if (edad>=31&&edad<=60)
		{cout<<" Second age";}
		else if (edad>=61&&edad<=90)
		{cout<<" Third age";}
		else
		{cout<<" Extra Hours";}
		cout<<"\n";
		system("Pause");
		system("cls");
	}
	return 0;
}
