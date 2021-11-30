#include <iostream>
using namespace std;
int vSuma[3]={0};
int vSumaC[3]={0};
void imprimirMatriz(int matr[3][3],int c, int f){
	for(int i=0;i<c;i++){
		for(int j=0;j<f;j++){
			cout<<"\t"<<matr[i][j];
			
		}
		cout<<"\tSuma: "<<vSuma[i];
		cout<<endl;
		if (i+1==c){
			cout<<"Suma: ";
			for(int j=0;j<f;j++){
				cout<<"\t"<<vSumaC[j];
			}
		} 
	}
	cout<<endl<<endl;
}
char imprVector(int vec[3], int x){
	for (int i=0;i<x;i++){
		cout<<vec[i]<<"\t";
	} 
	return ' ';
}
float promedioSuma(int vect[3],int x){
	float prom=0.0;
	for (int i=0;i<x;i++){
		prom+=vect[i];
	}
	return (prom/x);
}
	int mayorVector(int vect[3],int x){
		int may=0;
		for (int i=0;i<x;i++){
			for (int j=0;j<=i;j++){
				if (vect[i]>vect[j]){
					may=vect[i];
				}
			}
		}
		return (may);
	}
void sumMatriz(int matr[3][3],int c, int f){
		for(int i=0;i<c;i++){
			for(int j=0;j<f;j++){
				vSuma[i]+=matr[i][j];
			}
			cout<<endl;
		}
}
		void sumMatriz2(int matr[3][3],int c, int f){
			for(int i=0;i<c;i++){
				for(int j=0;j<f;j++){
					vSumaC[i]+=matr[j][i];
				}
				cout<<endl;
			}
		}
		
int main(int argc, char *argv[]) {
int matr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int f=3,c=3;
sumMatriz(matr,c,f);
sumMatriz2(matr,c,f);
imprimirMatriz(matr,c,f);
cout<<imprVector(vSuma,f)<<"\tPromedio: "<<promedioSuma(vSuma,f)<<" Mayor: "<<mayorVector(vSuma,f)<<endl;	
cout<<imprVector(vSumaC,f)<<"\tPromedio: "<<promedioSuma(vSumaC,f)<<" Mayor: "<<mayorVector(vSumaC,f)<<endl;	
cout<<endl;
system("pause");
return 0;
}

