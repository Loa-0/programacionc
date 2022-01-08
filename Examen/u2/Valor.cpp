#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x;
	char op;
	do{
		cout<<"Ingresa Un valor para evaluar: ";
		cin>>x;
		if (x>0)
			cout<<"Valor Positivo"<<endl;
		else if (x<0)
			cout<<"Valor Negativo"<<endl;
		else
			cout<<"Valor Neutro"<<endl;
		cout<<"\n\nPara salir 's'";
		cin>>op;
	}while(op!='s'&&op!='S');
	return 0;
}

