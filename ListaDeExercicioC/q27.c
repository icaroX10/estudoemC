#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int i,vetA[10],x,m[10];
	for(i=0;i<10;i++){
		printf("Digite o %d° numero:",i+1);
		scanf("%d",&vetA[i]);
	}
	printf("Digite o Numero X:");
	scanf("%d",&x);
	for(i=0;i<10;i++){
		m[i]=vetA[i] * x;
	}
	for(i=0;i<10;i++){
		printf("O Valor de M[%d] =%d\n",i+1,m[i]);
	}
	
	system("pause");
	return 0;
}
