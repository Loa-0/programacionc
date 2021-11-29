#include <iostream>
#include<math.h>
using namespace std;
//Grados a Radianes
float g2r(float grados){
	float rad;
	rad=grados*3.141592/180;
	return (rad);
}
//Factorial
long int fact(int n) {
		if (n <= 1) 
			return 1;
		else
			return n*fact(n - 1);
	}
//Calculo Coseno
float coseno(int x,int n){
	float cos=0.0;
	float rad = g2r(x);
	for (int i=0;i<=n;i++){
		int signo = pow(-1,i);
		int pot = 2*i;
		cos +=signo*(pow(rad,pot)/(fact(2*i)));
	}
	cout<<"Cos: "<<cos<<endl;
	return cos;
}	
//Main		
int main(int argc, char *argv[]) {
	//cout<<g2r(45)<<endl;
	//cout<<fact(3)<<endl;
	//cout <<pow(5,5)<<endl;
	cout<<"Cos: "<<endl<<endl;	
	coseno(120,10);
	return 0;
}

