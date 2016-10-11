void vetore(){
	char vetor[20] = "Teste de String";
	
	char *point;
	
	point = vetor;
	point = point + 9;
	printf("\n %c \n", *point);
	getch();
}
main(){
	vetorCmais();
}
