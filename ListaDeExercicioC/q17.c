#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	char nome[100];
    int qt;
    float p, pf;
    printf("Nome do produto: ");
	scanf("%s",nome);
	printf("Preço do produto: ");
    scanf(" %f", &p);
    printf("Quantidade do produto: ");
    scanf(" %d", &qt);
    
	
	if(qt <= 5){
        pf = p * qt - (p * qt * 0.02);
    }else if(qt > 5 && qt <= 10){
        pf = p * qt - (p * qt * 0.03);
    }else{
        pf = p * qt - (p * qt * 0.05);
	}
	printf("Nome: %s\nQuantidade: %d\nPreço: R$%.2f\nPreço Final: R$%.2f\n", nome, qt, p, pf);
	system("pause");
	return 0;
}
