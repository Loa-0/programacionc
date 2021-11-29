#include <iostream>
using namespace std;
int fact(int n){
	long r=1;
	for ( int i=1;i<=n;i++){
		r=r*i;
	}
	return r;	
}
	int Combinaciones(int n, int r){
		int res;
		res = fact(n)/(fact(n-r)*fact(r));
		return res;
	}
int main(int argc, char *argv[]) {
	int x=5,n=2,res;
	res = Combinaciones(x,n);
	cout<<"Combinaciones: "<<res<<endl;
	return 0;
}
		
