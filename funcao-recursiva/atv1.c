#include <stdio.h>
int fib(int n){
	if((n == 1)||(n == 2)){
		return 1;
	}else{
		return fib(n-1)+fib(n-2);;
	}
}
int main(void){
	int x;
	printf("Digite o tamanho:");
	scanf("%d",&x);
	printf("%d",fib(x));
	return 0;
}
//Estilo Berto-----

#include <stdio.h>
int fib(int pos,int act,int ant){
	printf(" %d ",ant);
	if(pos <= 1){
		return;
	}else{
		return fib(pos-1,act+ant,act);
	}
}
int main(void){
	int x;
	printf("Digite o tamanho:");
	scanf("%d",&x);
	fib(x,1,0);
	return 0;
}
