#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int i,n,acr;
	printf("digite um numero: ");
	scanf("%d",&n);
	for(i=1;i < n;i++){
		if((n%i)==0){
			acr++;
		}
	}
	if(acr>2){
		printf("Não e primo\n");
	}else{
		printf("é primo\n");
	}
	system("pause");
	return 0;
}
