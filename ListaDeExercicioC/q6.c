#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int percentB(int a,int el){
	return(a*100/el);
}
int percentN(int a,int el){
	return(a*100/el);
}
int percentV(int a,int el){
	return(a*100/el);
}
main(){
	setlocale(LC_ALL, "Portuguese");
	int eleitor,votB,votN,votV;
	printf("Digite quantos eleitor votaram:");
	scanf("%d",&eleitor);
	printf("Digite quantos votaram branco(max %d):",eleitor);
	scanf("%d",&votB);
	printf("Digite quantos votaram Nulos(max %d):",eleitor-votB);
	scanf("%d",&votN);
	if(votB <= eleitor && votN <= eleitor){
		printf("O percentual de eleitor que votaram branco é %d%%\n",percentB(votB,eleitor));
		printf("O percentual de eleitor que votaram nulos é %d%%\n",percentN(votN,eleitor));
		printf("O percentual de eleitor que validaram é %d%%\n",percentV(eleitor-votB-votN,eleitor));
	}
	
}
