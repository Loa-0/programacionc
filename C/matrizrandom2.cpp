#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int i,j,m,n,p,s,op;
int main ()
{	srand(time(NULL));
//m=rand() % 10;
m=5;
n=m;
int A[5][5];
printf("Dimensiones de la matriz %d X %d\n\nValores:\n",m,n);
for (i=0;i<m;i++)
{
	for (j=0;j<m;j++)
	{
		A[i][j]=rand() % 100 + 1;
		printf("%5d",A[i][j]);
		s=A[i][j]+s;
	}
	printf("\n");
}
do{
	printf("\n\n\nQue deseas obtener\n1)Promedio\n2)Sumatoria\nSalir Cualquier numero\n");
	scanf("%d", &op);
	switch (op){
	case 1:
		p=s/(m*n);//promedio
		printf("\nPromedio de todos los valores: %d",p);
		break;
	case 2:
		printf("\nSumatoria de todos los valores: %d",s);
		break;
	default: printf("Proceso Finzalizado");
	getch();
	exit(0);
	}
}while(op==1||op==2);

getch();
}
