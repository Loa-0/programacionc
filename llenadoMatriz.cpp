#include <iostream>
using namespace std;
void imprimirMatriz(int matr[5][5],int c, int f){
	for(int i=0;i<c;i++){
		for(int j=0;j<f;j++){
			cout<<"\t"<<matr[i][j];
		}
		cout<<endl;
	}
}
int main(int argc, char *argv[]) {
	int mat[5][5]={0};
	int c=5,f=5,a=1;
	imprimirMatriz(mat,c,f);
	for(int i=0;i<f;i++){
		if (i%2==0){
			for(int j=0;j<c;j++){
				mat[i][j]=a;
				a++;
			}
		}
		else{
			for(int j=c-1;j>=0;j--){
				mat[i][j]=a;
				a++;
			}
		}
		cout<<endl;
	}
	cout<<endl;
	imprimirMatriz(mat,c,f);
	return 0;
}

