#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int i,j,n;
	printf("Digite o valor de N=");
	scanf("%d",&n);
	if(n>0){
		for(i=1;i<=n;i++){
			for(j=0;j<i;j++){
				printf("-");
			}
			printf("%d",i);
			
			printf("\n");
		}
	}else{
		printf("N= %d é menor ou igual a 0",n);
	}
	system("pause");
	return 0;
}	
