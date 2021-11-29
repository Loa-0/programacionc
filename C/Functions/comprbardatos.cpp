#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(int argc, char *argv[]) { 
	system("cls");
	int x,UM,Dec,Cen,Uni,R1,R2;
	cout<<"Dame un valor entre 1000 a 9999 : ";
	cin>>x;
	if(x<1000||x>9999){
		cout<<"\nValor fuera de rango";
	}
		cout<<endl;
	else{
		UM=x/1000;
		R1=x%1000;
		Cen=R1/100;
		R2=R1%100;
		Dec=R2/10;
		Uni=R2%10;
	}	
	if(UM==Uni){ 
		UM=Uni;
	}
	Uni=UM;
	}
	if(Cen==Dec){ Cen=Dec;
	Dec=Cen;
	}
	if(UM==Uni||Cen==Dec){ 
		printf("\nEl valor %d es palindromo",x);
	}
	
	else{
		printf("\nEl valor %d no se puede leer al derecho y al reves",x);
	}
	
	}
	getch();
	return 0;
}

