#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int tam=0,i,som = 0,div= 0;
	printf("Digite quantas notas você quer adicionar:");
	scanf("%d",&tam);
	int n[tam];
	for(i=0;i<tam;i++){
		printf("Digite a  nota %d:",i+1);
		scanf("%d",&n[i]);
		som +=n[i];
	}
	div = som/tam;
	if(div >= 7){
		printf("O aluno foi Aprovado com Media %d.\n",div);
	}else{
		printf("O aluno foi Reprovado com Media %d.\n",div);
	}
	
	system("pause");
	return 0;
}
