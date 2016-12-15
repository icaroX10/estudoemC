#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int n1,n2;
	printf("Digite o primeiro numero:");
	scanf("%d",&n1);
	printf("Digite o segundo numero:");
	scanf("%d",&n2);
	if(n1 != n2){
		if(n1>n2){
			printf("n1=%d é maior que n2=%d\n",n1,n2);
		}else{
			printf("n2=%d é maior que n1=%d\n",n2,n1);
		}
	}else{
		printf("Numeros São iguais\n");
	}
	system("pause");
	return 0;
}
