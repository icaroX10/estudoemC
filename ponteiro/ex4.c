void vetore(){
	char vetor[20] = "Teste de String";
	
	char *point;
	
	point = vetor;
	point = point + 9;
	printf("\n %c \n", *point);
	getch();
}
void calcV(){
	int mat[10] = {1,8,3,7,5,3,7,23,68,10};
	int *point, i;
	
	point = mat;
	for(i=0;i<10;i++){
		printf("%d\n",*(point+i));
	}
}
main(){
	calcV();
}
