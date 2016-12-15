#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int i,rd;
	for(i=0;i<20;i++){
		rd = 1000 + (rand() % 1999);
		if(rd%11==5){
			printf("%d é divisivel por 11 e da 5\n",rd);
		}
	}
	system("pause");
	return 0;
}
