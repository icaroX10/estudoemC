#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int vet[15],i,aux=0,cont=0,j,pos[15];
	for(i=0;i<15;i++){
		printf("Digite o %d° numero:",i+1);
		scanf("%d",&vet[i]);
	}
	for(i=0;i<15;i++){
		for(j=i+1;j<15;j++){
			if(vet[i] == vet[j]){
				printf("Numero %d Repetido na posição[%d]\n",vet[i],j+1);
			}
		}
	}
	
	system("pause");
	return 0;
}
