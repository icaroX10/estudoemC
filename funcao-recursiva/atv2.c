#include <stdio.h>
int inverse(int n){
	int som;
	if(n==0){
		return 1;
	}else{
		printf("%d",n%10);
		som = inverse(n/10);
		return som;
	}
}
int main(void){
	int a;
	printf("Digite um numero:");
	scanf("%d",&a);
	inverse(a);
	return 0;
}
