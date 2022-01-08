#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n=0,sum=0;
	cout<<"Introduce el nuemro a sumar :";
	cin>>n;
	for (int i=1;i<=n;i++){
		sum=i+sum;
	}
	cout<<"Sumatoria: "<<sum<<endl;
	sum=0;
	for (int i=n;i>=1;i--){
		sum=i+sum;
	}
	cout<<"Sumatoria Desendente: "<<sum<<endl;
	return 0;
}

