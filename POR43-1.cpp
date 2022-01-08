#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include <iostream>

void main()
{int par=0,x,cont=0,prom=0;
char op='d';
while(op!='s'&&op!='S')
{clrscr();
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
clrscr();
if(cont==0)
{printf("\nEl promedio de pares es: 0");
getch();
}
prom=par/cont;
printf("\nEl promedio de pares es: %d\n",prom);
printf("\nPresione Enter para salir.");
getch();
}
