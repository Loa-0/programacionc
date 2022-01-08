//Uriel Vazquez 3A 
#include <iostream>
using namespace std;
int bisiesto(int year){
	int esBis;
	if ((year%4)==0){
		if(((year%100)==0)&&((year%400)!=0)){
			esBis=0;
		}
		else
		{esBis=1;}
	}
	else
	{esBis=0;}
	return esBis;
}
	int main(int argc, char *argv[]) {
		int month,year,day;
		cout<<"Ingresa Mes y year para calcular el nuemro de dias que tiene\n";
		cout<<"Mes: ";
		cin>>month;
		cout<<"\nYear: ";
		cin>>year;
		switch (month){
		case 1:case 3:case 5:case 7: case 8: case 10: case 12:
			day=31;
			break;
		case 2:
			(bisiesto(year))? day=29:day=28;
			break;
		default: day=30;
		}
		cout<<"La fecha: "<<month<<"/"<<year<<" tiene: "<<day<<" dias";
		(bisiesto(year))? cout<<"\nEl year es bisiesto":cout<<"\n";
		return 0;
		system("pause");
	}
	
