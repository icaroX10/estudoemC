#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int x,y;
	printf("Digite um numero X:");
	scanf("%d",&x);
	printf("Digite um numero Y:");
	scanf("%d",&y);
	if(x<y){
		printf("%d maior que %d",y,x);
	}else{
		printf("%d maior que %d",x,y);
	}
}
