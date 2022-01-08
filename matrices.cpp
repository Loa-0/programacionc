#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]) {
	const int f=3,c=4;
	
	int a[f][c]={{7,8,3,5},{1,6,2,4},{10,12,9,11}};
	int b[c][f];
	cout<<"Matriz A: "<<endl;
	for(int i=0;i<f;i++){
		for ( int j=0;j<c;j++){
			printf("% 5d",a[i][j]);
			b[j][i]=a[i][j];
		}
		cout<<endl;
		
	}
	int sum[c]={0},temp;
	cout<<endl<<endl<<"Matriz B: "<<endl;
	for(int i=0;i<c;i++){
		temp=0;
		for ( int j=0;j<f;j++){
			
			printf("% 5d",b[i][j]);
			//temp+=b[i][j];
			sum[i]=sum[i]+b[i][j];
		}
		//sum[i]=temp;
		cout<<endl;
		
	}
	cout<<endl<<endl<<"Sum: "<<endl;
	for ( int j=0;j<c;j++){
		printf("% 5d",sum[j]);
	}
	
	return 0;
}

