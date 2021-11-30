#include <iostream>
using namespace std;
void impresionVec(int vect[], int n){
	for (int i=0;i<n;i++){
		cout<<"\t "<<vect[i];
	}
	cout<<endl<<endl;
}
	
int main(int argc, char *argv[]) {
	int vec[]={5,3,1};
	impresionVec(vec,3);
	int aux;
	if(vec[0]>vec[1]){
		aux=vec[1];
		vec[1]=vec[0];
		vec[0]=aux;
	}
	if(vec[1]>vec[2]){
		aux=vec[2];
		vec[2]=vec[1];
		vec[1]=aux;
	}
	if(vec[0]>vec[1]){
		aux=vec[1];
		vec[1]=vec[0];
		vec[0]=aux;
	}		
	impresionVec(vec,3);
	return 0;
}
