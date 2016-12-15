#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int n1;
	printf("Digite o numero:");
	scanf("%d",&n1);
	
	if(n1 != 100){
		if(n1 > 100){
			printf("O numero e maior que 100\n",n1,n2,p);
		}else{
			printf("E menor que 100\n");
		}	
	}else{
		printf("E igual a 100\n");
	}
	
	system("pause");
	return 0;
}
