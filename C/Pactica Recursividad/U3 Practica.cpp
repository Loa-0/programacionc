#include <iostream>
using namespace std;
//Mayor Calificacion
int fnMayorCalificacion(int *cal, int n){
	int temp=0;
	for(int i=0;i<=n;i++){
		//cout<<"vector: "<<cal[i]<< "Temp:  "<<temp<<endl;
		if (cal[i]>temp){
			//cout<<"vector: "<<cal[i]<< "Temp:  "<<temp<<end;
			temp=cal[i];
		}
	}
	return(temp);
}
//Promedio
float fnPromedio(int cal[],float n){
	int temp=0;
	float prom;
	for(int i=0;i<=n;i++){
		temp += cal[i];
		//cout<<"vector: "<<cal[i]<< "Temp:  "<<temp<<endl;
	}
	//cout<< temp;
	n+=1.0;
	prom=temp/n;
	return(prom);
}
	
//Ordenar Datos
void fnOrdenarDatos(int cal[],int n){
	int temp=0;
	for(int i=0;i<=n;i++){
		//cout<<"vector: "<<cal[i]<< "Temp:  "<<temp<<endl;
		for(int j=i;j<=n;j++){
			if (cal[i]>cal[j]){
				//cout<<"vector: "<<cal[i]<< "Temp:  "<<temp<<end;
				temp=cal[i];
				cal[i]=cal[j];
				cal[j]=temp;
			}
		}
	}
	for(int i=0;i<=n;i++){
	cout<<"vector: "<<cal[i]<<endl;
	}
	return void();
}
	
void fnOrdenar2Datos(int cal[],int n){
		int temp=0;
		n=2;
		for(int i=0;i<=n;i++){
			//cout<<"vector: "<<cal[i]<< "Temp:  "<<temp<<endl;
			for(int j=i;j<=n;j++){
				if (cal[i]>cal[j]){
					//cout<<"vector: "<<cal[i]<< "Temp:  "<<temp<<end;
					temp=cal[i];
					cal[i]=cal[j];
					cal[j]=temp;
				}
			}
		}
		for(int i=0;i<=n;i++){
			cout<<"vector: "<<cal[i]<<endl;
		}
		return void();
	}
	//recursivo fiboncacci
long fibonacciRecursivo(long posicion) {
	if (posicion < 2)
		return posicion;
	return fibonacciRecursivo(posicion - 1) + fibonacciRecursivo(posicion - 2);
}

		
//Main
	int main(int argc, char *argv[]) {
	int cal[]={9,5,7,6,10};
	int n=4;
	//cout<<fnMayorCalificacion(cal,n)<<endl;
	//cout<<"Promedio: " <<fnPromedio(cal,n)<<endl;
	//cout<< "Ordenar:"<< endl;
	//fnOrdenarDatos(cal,n);
	//fOrdenar2Datos(cal,2);
	cout<<"Fibonacci calculado con 10 es :"<<  fibonacciRecursivo(10);
	return 0;
}

