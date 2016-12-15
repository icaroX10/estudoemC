#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int n1,n2,p;
	printf("Digite o primeiro numero:");
	scanf("%d",&n1);
	printf("Digite o segundo numero:");
	scanf("%d",&n2);
	if(n1 != 0 && n2 != 0){
		p = n1* n2;
		printf("O produto de %d * %d é %d\n",n1,n2,p);
	}else{
		printf("Você digitou zero\n");
	}
	system("pause");
	return 0;
}
