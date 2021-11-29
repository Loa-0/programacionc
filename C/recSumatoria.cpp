#include <iostream>
using namespace std;
int sum(int x){
	if (x==1)
		return x;
	else
		return(x+sum(x-1));
}
int contadorInverso(){
	for (int i=10;i>0;i--){
		cout <<i<<endl;
	}
	return 0;
}
 int contInversoRecursivo(int x){
	 if (x<0)
		 return x;
	 else
		{ cout<<x<<endl;
		 return(contInversoRecursivo(x-1));
	 }
 }
	 
int multpSumatoria(int x,int y){
	int res=0;
	for (int i=1;i<=y;i++){
		res+=x;
	}
	cout<<res <<endl;
	res=1;
	for (int i=1;i<=y;i++){
		res*=x;
	}
	cout<<res <<endl;
	return res;
}
int multpSumatoriaRecursivo(int x,int y){
		if(1==y)
			return x;
		else
			return (x+=multpSumatoriaRecursivo(x,y-1));
	}
	 
int main(int argc, char *argv[]) {
	int x=100;
	//cout<<"Sumatoria: "<< sum(x)<< endl; 
	//contadorInverso();
	//contInversoRecursivo(10);
	multpSumatoria(5,3);
	cout<<multpSumatoriaRecursivo(5,6);
	return 0;
}

