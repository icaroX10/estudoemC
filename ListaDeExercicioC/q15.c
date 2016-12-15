#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int n_s;
	printf("digite seu salario:");
	scanf("%d",&n_s);
	if(n_s<=500){
		n_s = n_s * 1.15;
		printf("Seu novo salario com ajuste de 15%% é %d\n",n_s);
	}else if(n_s <= 1000){
		n_s = n_s * 1.10;
		printf("Seu novo salario com ajuste de 10%% é %d\n",n_s);
	}else{
		n_s = n_s * 1.05;
		printf("Seu novo salario com ajuste de 5%% é %d\n",n_s);
	}
	system("pause");
	return 0;
}
