#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int  i,j,cont=0,ve[11];
	for (i=1;i<=10;i++){
		cout<<endl<<"Tabla de "<<i<<":"<<endl;
		cont=0;
		if(i==6)
		{break;}
		else{
			for(j=1;j<=10;j++){
				if(j==6){continue;}
				else{
					cont=i*j+cont;
					cout<<i<< " x "<<j<<"= "<< i*j<<endl;
				}
			}
			ve[i]=cont;
		}
	}
	for(i=1;i<=10;i++){
		cout<<endl<<"La sumatoria de la tabla de "<<i<<" es "<< ve[i];
	}
	return 0;
}

