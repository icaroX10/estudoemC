#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int vet[20],i,x,enc,new_vet[19],cont;
	
	for(i=0;i<20;i++){
		printf("Digite o %d° numero:",i+1);
		scanf("%d",&vet[i]);
	}
	printf("Digite o X:");
	scanf("%d",&x);
	for(i=0;i<20;i++){
		if(x == vet[i]){
			enc = 1;
		}
	}
	if(enc){
		for(i=0;i<20;i++){
			if(vet[i]!=x){
				new_vet[cont] = vet[i];
				cont++;
			}
		}
	}else{
		printf("Não foi encontrado o numero.. %d",x);
	}
	if(enc){
		printf("====Vetor modificado===\n");
		for(i=0;i<19;i++){					
			printf("Vetor[%d]=%d\n",i+1,new_vet[i]);
		}
	}else{
		printf("====Vetor não modificado===\n");
		for(i=0;i<20;i++){			
			printf("Vetor[%d]=%d\n",i+1,new_vet[i]);
		}
	}
	
	system("pause");
	return 0;
}
