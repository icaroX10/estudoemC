#include <stdio.h>
#include <stdlib.h>
main(void){
	int n1, n2;
	printf("Digite o numero 1:");
	scanf("%d",&n1);
	printf("Digite o numero 2:");
	scanf("%d",&n2);
	if(n1 >= 0 && n2 >=0){
		if(n1>n2){
			printf("%d/%d = %d",n1,n2,(n1/n2));
		}else{
			printf("%d/%d = %d",n2,n1,(n2/n1));
		}
	}else{
		printf("o numero e negativo");
	}
	return 0;
}
