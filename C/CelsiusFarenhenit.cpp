#include <iostream>
using namespace std;
int x;
int main(int argc, char *argv[]) {
	cout<<"Farenheit a Celsius\nIngresa los grados Farenheint:  ";
	cin>>x;
	cout<<x<<" Farenheint son "<< ((x-32)*5)/9 <<" Celsius";
	return 0;
}


