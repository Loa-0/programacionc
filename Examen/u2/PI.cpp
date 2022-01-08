#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int x;
	float s=-1,count=0;
	cout<<"Ingresa el numero de iteraciones: ";
	cin>>x;
	x=x*2;
	for(int i=1;i<=x;i=i+2){
		s=s*-1;
		count=count+4.0/(s*i);
		cout<<count<<endl;
	}
	cout<<"Pi: "<<count<<endl;
		return 0;
}


