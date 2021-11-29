#include <iostream>
#include "lib.h"
using namespace std;
int fnOrdenarVector(int vec[],int siz){
	int datos2[5];{
		for(int i=0;i<=siz;i++)
			datos2[siz-i-1]=vec[i];
	}
	for(int i=0;i<siz;i++){
		cout<<datos2[i]<<" ";
	}
	return 0;
}
int imprimirAscendente(int n){
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++)
		{cout<<i;}
		cout<<endl;
	}
	for (int i=n-1;i>0;i--){
		for (int j=i;j>0;j--)
		{cout<<i;}
		cout<<endl;
	}
	return 0;
}
		
int imprimirDescendende(int n){
	//gotoxy(col,fil);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n-i;j++){
			cout<<".";
		}
		for (int j=1;j<=i;j++)
		{cout<<"*";}
		cout<<endl;
	}
	for (int i=n-1;i>0;i--){
		for (int j=1;j<=n-i;j++){
			cout<<".";
		}
		for (int j=i;j>0;j--)
		{cout<<"*";}
			cout<<endl;
	}
	return 0;
}		
	
int imprimirMatriz(){
	int d[3][3]={{7,3,4},{2,5,9},{1,6,8}};
	for (int i=0;i<=2;i++){
		cout<<d[i][i]<<endl;
	}
	return 0; 
}
int main(int argc, char *argv[]) {
	int datos[]={7,5,10,8,3};
	int r= sizeof(datos)/sizeof(int);
	//fnOrdenarVector(datos,r);
	//imprimirAscendente(7);
	imprimirDescendende(7);
	//imprimirMatriz();
	return 0;
}

