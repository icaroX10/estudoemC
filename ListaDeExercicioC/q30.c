#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int v1[15],v2[15],i,enc=0;
	printf("===Vetor 1 ====\n");
	for(i=0;i<15;i++){
		printf("Digite o %d° do vetor1 numero:",i+1);
		scanf("%d",&v1[i]);
	
	}
	printf("===Vetor 2 ====\n");
	for(i=0;i<15;i++){
		printf("Digite o %d° do vetor2 numero:",i+1);
		scanf("%d",&v2[i]);
	}
	for(i=0;i<15;i++){
		if(v1[i]==v2[i]){
			enc+=1;
		}
	}
	if(enc>0){
		printf("Tem %d numeros repedidos\n",enc);
	}else{
		printf("Não tem numeros repetidos\n");
	}
	system("pause");
	return 0;
}
