#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int a=10,b=20,c;
	c = a;
	a = b;
	b = c;
	printf("O valor de A = %d e B =%d\n",a,b);
	
	system("pause");
}
