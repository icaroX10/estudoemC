#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int x;
	printf("Digite um numero:");
	scanf("%d",&x);
	printf("O antecessor do numero %d � :%d",x,x-1);
}
