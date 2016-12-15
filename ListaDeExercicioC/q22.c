#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int n,i;
	printf("Digite o numero:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if((n%i)==0){
			printf("%d é um divisor de %d\n",i,n);
		}
	}
	system("pause");
	return 0;
}	
