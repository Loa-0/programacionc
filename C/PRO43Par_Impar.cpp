#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define limpia_pantalla system( &#34;cls&#34; );
using namespace std;

int main(int argc, char *argv[]) {
	int par=0,x,cont=0,prom=0;
	char op='d';
	while(op!='s'&&op!='S')
	{
		system("cls");
		printf("Calcular el valor Par o Imapr\n");
		printf("Dame un valor: ");
		cin>>x;
		if(x%2==0)
		{printf("\nEste valor es par.\n");
		cont++;
		par=par+x;
		}
		else
		{printf("\nEste valor es impar.\n");
		}
		printf("\nPara salir: s\nPara continuar: otro caracter\n");
		cin>>op;
	}
	cout <<cont;
	if(cont==0)
	{
		printf("\nEl promedio de pares es: 0");
	}
	else{
	prom=par/cont;
	printf("\nAl sumar los Numeros Pares el promedio es: %d\n",prom);
	}
	printf("\nPresione Enter para salir.");
	getch();
	return 0;
}




