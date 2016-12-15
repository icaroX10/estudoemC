#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int x;
	printf("Digite um numero:");
	scanf("%d",&x);
	if(x>=10){
		printf("X= x+5= %d",x+5);
	}else{
		printf("X= x-7= %d",x-7);
	}
}
