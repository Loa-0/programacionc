#include <iostream>
#include <windows.h>
using namespace std;

int suma(int x,int y)
{return (x+y);}

int resta(int x,int y)
{return (x-y);}

int sumatoria(int num){
	int suma=0;
	for (int i=0;i<=num;i++)
		suma=suma+i;
	return suma;
}
	void gotoxy(int x, int y) {
		HANDLE hconsola;
		COORD Wpos;
		Wpos.X = x;
		Wpos.Y = y;
		hconsola = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hconsola, Wpos);
	}
	void clrscr()/*Creando funcion para limpiar pantalla.*/
	{
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coord = {0, 0};
		DWORD count;
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		GetConsoleScreenBufferInfo(hStdOut, &csbi);
		FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X *
								   csbi.dwSize.Y, coord, &count);
		SetConsoleCursorPosition(hStdOut, coord);
	}
	
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
