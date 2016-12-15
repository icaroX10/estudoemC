#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int x;
	setlocale(LC_ALL, "Portuguese");
	printf("Saiba os multiplos de um numero\n");
	printf("Digite um numero:");
	scanf("%d",&x);
	printf("O quadrado desse numero é: %d\n",x*x);
	
	system("pause");
}
