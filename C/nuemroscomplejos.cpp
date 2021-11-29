#include <iostream>
#include <stdio.h>
#include <complex.h> 

using namespace std;

int main(int argc, char *argv[]) {
	int negNum; 
	printf("Calculate negative square roots:\n" "Enter negative number:"); 
	scanf("%d", &negNum);
	double complex negSqrt = csqrt(negNum);
	double pReal = creal(negSqrt);
	double pImag = cimag(negSqrt);
	printf("\nReal part %f, imaginary part %f" ", for negative square root.(%d)", pReal, pImag, negNum); 
	return 0; 
}

