#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fibo(int n){
	if((n==0) ||(n==1)){
		return n;
	}else{
		return fibo(n-1)+fibo(n-2);
	}
	
}
main(void){
	setlocale(LC_ALL, "portuguese");
	int a,i;
	printf("Digite ate quantos numeros você quer:");
	scanf("%d",&a);
	for(i = 0; i <= a; i++){
		printf(" %d ", fibo(i));
	}
    printf("\n");
	system("pause");
	return 0;
}	
