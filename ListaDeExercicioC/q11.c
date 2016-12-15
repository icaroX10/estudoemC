#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char *nome;
	float dinheiro;
	int tipo;
}empresa;
empresa *receita;
int add(int qtd,int tipo);
main(void){
	int cadastra = 0;
	printf("Sistema de calculos de Lucro e Prejuizo\n");
	int op = 1,i=0;
	while(op!=0){
		receita = (empresa*)malloc(i+1*sizeof(empresa));
		cadastra++;
		printf("------------------------------------\n");
		printf("Digite 1 para cadastrar receita\n");
		printf("Digite 2 para cadastrar despesas\n");
		printf("Digite 0 para sair\n");
		printf("------------------------------------\n");
		scanf("%d",&op);
		if(op==1){
			add(cadastra,1);
		}else if(op == 2){
			add(cadastra,2);
		}else{
			printf("Você n estar mais cadastrando.");
		}
	}
	free(receita);
	system("pause");
	return 0;
}

int add(int qtd,int tipo){
	printf("Digite o nome da atividade:");
	fflush(stdin);
	scanf("%s",&receita[qtd-1].nome);
	fflush(stdin);
	printf("Digite o valor da atividade:");
	scanf("%s",&receita[qtd-1].dinheiro);
	if(tipo ==  1){
		receita[qtd-1].tipo = 1;
	}else{
		receita[qtd-1].tipo = 2;
	}
}
