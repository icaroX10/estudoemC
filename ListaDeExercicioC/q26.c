#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct {
    char nome[100];
}pessoa;

pessoa *ser;
main(void){
	setlocale(LC_ALL, "portuguese");
	char *nome, proc_nm[50];
	int i,enc=0;
	ser = (pessoa*) malloc(10* sizeof(pessoa));
	for(i=0;i<10;i++){
		printf("Digite o nome:");
		scanf("%s",ser[i].nome);
	}
	printf("Digite um nome que você deseja procurar:");
	
	scanf("%s",proc_nm);
	
	for(i=0;i<10;i++){
		 if(strcmp(proc_nm, ser[i].nome) == 0){
			enc++;
		}
	}
	if(enc > 0){
		printf("ACHEI!\n");
	}else{
		printf("NÃO ACHEI!\n");
	}
	
	
	system("pause");
	return 0;
}
