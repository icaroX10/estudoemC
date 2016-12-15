#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int x,y;
	printf("Saiba a Area de um retangulo\n");
	printf("Digite a Base:");
	scanf("%d",&x);	
	printf("Digite a Altura:");
	scanf("%d",&y);	
	printf("A area do retangulo é: %d\n",x*y);
	system("pause");
}
