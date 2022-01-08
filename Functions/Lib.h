#include <windows.h>	// HANDLE
using namespace std;

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
	FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
	SetConsoleCursorPosition(hStdOut, coord);
}


int _suma(int x, int y) {
	return(x+y);  
}

