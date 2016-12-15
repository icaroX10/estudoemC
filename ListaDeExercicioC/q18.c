#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int cd, dt_nac, tempo_trab;
	char sexo;
	printf("Informe o código do funcionario: ");
	scanf("%d",&cd);
	printf("Informe o ano de nascimento do funcionario:");
	scanf("%d",&dt_nac);
	printf("Informe o ano em que funcionario ingressou na empresa: ");
	scanf("%d",&tempo_trab);
	printf("Informe o sexo do funcionario[f/m]: ");
	fflush(stdin);
	scanf("%c",&sexo);
	fflush(stdin);
	if(sexo == 'm' || sexo == 'M'){
        if(2016 - dt_nac >= 65 && 2016 - tempo_trab >= 30)
            printf("Requer aposentadoria\n");
        else
            printf("Não requer aposentadoria\n");
    }else if (sexo == 'f' || sexo == 'F'){
        if(2016 - dt_nac >= 60 && 2016 - tempo_trab >= 25)
            printf("Requer aposentadoria\n");
        else
            printf("Não requer aposentadoria\n");
    }	
	
	
	system("pause");
	return 0;
}	
