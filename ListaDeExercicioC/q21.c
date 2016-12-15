#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fat(int n){
	if(n==1){
		return 1;
	}else{
		return n * fat(n-1);
	}
}
main(void){
	setlocale(LC_ALL, "portuguese");
	int n;
	printf("======FATORIAL======\n");
	printf("Digite um numero:");
	scanf("%d",&n);
	printf("O Fatorial de %d é %d\n",n,fat(n));
	system("pause");
	return 0;
}	
