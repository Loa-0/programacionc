#include <iostream>
using namespace std;
void impresionVec(int *vec, int n){
	for (int i=0;i<n;i++){
		cout<<"\t "<<*(vec+i);
	}
	cout<<endl<<endl;
}
int main(int argc, char *argv[]) {
	int n=5;
	int *p,*q;
	cout<<"n: "<<n<<endl;
	cout<<"&n: "<<&n<<endl;
	cout<<"&p: "<<&p<<endl;
	cout<<"*p: "<<*p<<endl;
	cout<<"p: "<<p<<endl;
	cout<<endl;
	
	p=&n;
	*p=10;
	
	cout<<"    p=&n;  *p=10     "<<endl;
	cout<<" &n:  "<<&n<<endl;
	cout<<" p:  "<<p<<endl;
	cout<<" *p:  "<<*p<<endl;
	
	cout<<"n: "<<n<<endl;
	
	int calificacion[] = {10,9,7,8};
	int *cal =calificacion;
	*(cal+2)=6;
	cout <<endl<<calificacion[2]<<endl;
	impresionVec(cal,4);
	system("pause");
	return 0;
	
}

