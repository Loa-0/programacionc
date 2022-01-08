#include <iostream>
#include <stdlib.h>
#include "lib.h"
using namespace std;

int main(int argc, char *argv[]) {
	int ascii=65;
	for  (int i=1;i<=26;i++){
		if(i%2!=0)
			printf("%c ",ascii);
		else
			printf("%c ",tolower(ascii));
		ascii++;
	}
	cout<<endl<<endl;
	ascii=65;
	for  (int i=1;i<=26;i++){
			printf("%c%c ",ascii,tolower(ascii));
		ascii++;
	}
	cout<<endl;
	system("pause");
	return 0;
}

