#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int i,j,m,n,p,s;
int main ()
{
	srand(time(NULL));
	m=rand() % 10 + 1;
	n=m;
	int A[m][n];
	printf("Dimensiones de la matriz %d X %d\n",m,n);
	printf("\nValores:\n");
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
	p=s/(m*n);//promedio
	printf("\nPromedio de todos los valores: %d",p);
	getch();
}
