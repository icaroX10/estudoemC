#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int dia,mes,ano,nasc;
	printf("Digite o dia:");
	scanf("%d",&dia);	
	printf("Digite o mes:");
	scanf("%d",&mes);	
	printf("Digite o ano:");
	scanf("%d",&ano);
	nasc = ano*365 + mes*30 + dia;
	printf("Você viu %d dias\n",nasc);
	system("pause");
}
