#include <iostream>
using namespace std;
void impresionVec(int vect[], int n){
	for (int i=0;i<n;i++){
		cout<<"\t "<<vect[i];
	}
	cout<<endl<<endl;
}
int main(int argc, char *argv[]) {
	int vec[]={3,9,7};
	impresionVec(vec,3);
	int aux;
	if ((vec[0]>vec[1] && vec[0]>vec[2])){
		if (vec[1]>vec[2]){
			aux=vec[0];
			vec[0]=vec[2];
			vec[2]=aux;
		}
		else {
			aux=vec[0];
			vec[0]=vec[1];
			vec[1]=vec[2];
			vec[2]=aux;			
		}
	}
	//2,6,3
	else if (vec[1]>vec[0] && vec[1]>vec[2]){
		if (vec[0]>vec[2]){
			aux=vec[0];
			vec[0]=vec[2];
			vec[2]=vec[1];
			vec[1]=aux;
		}
		else{
			aux=vec[1];
			vec[1]=vec[2];
			vec[2]=aux;
		}
	}
	//3,2,6
	else if (vec[2]>vec[0] && vec[2]>vec[1]){
		if (vec[0]>vec[1]){
			aux=vec[0];
 			vec[0]=vec[1];
			vec[1]=aux;
		}
	}
	
	impresionVec(vec,3);
	
	system("pause");
	return 0;
}
