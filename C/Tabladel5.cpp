#include <iostream>
using namespace std;
int i, c ;
int main(int argc, char *argv[]) {
	c=5;
	cout<< "Tabla del "<< c<< endl;
	for (i=1;i<=10;i++){
		if (i!=6){
			cout << c <<" x "<< i <<" = "<<c*i;
			if (i%2==0)
					cout<< " Es par";
			else 
				cout<<"  Es impar";
		cout <<endl;
		}
		
	}
	return 0;
}

