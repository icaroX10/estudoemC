#include <stdio.h>

int teste(){
	int x = 5;
	char c[1];
	int *pi;
	c[0] = 'g';
	char *pc;
	pi = &x;
	pc = &c;
	printf("%d\n",pi);
	//Precisa ta em %d pra aparecer o valor da memoria
	printf("%d\n",*pc);
	//Com o * você pegara o valor que esta contido na memoria referenciada
	printf("%c\n",*pc);
	
}
void test2(){
	int x;
	// x nesse momento esta recebendo o valor 10
	x = 10;
	// Aqui to criando o ponteiro
	int *ponteiro;
	// o ponteiro esta recebendo o endereço da memoria de x
	ponteiro = &x;
	
	int y = 20;
	// Aqui o valor do ponteiro que esta referenciando a memoria de x vai receber 20... ou seja... x de 10 vai pra 20
	*ponteiro = y;
	
	printf("Valor do X = %d\nValor do Y = %d\nValor do ponteiro = %d\n",x,y,ponteiro);
	return 0;
}
void atribuir(){
	int x=10;
	int *pX;
	pX = &x;
	//ou int *pX=&x;
	return 0;
}
void entM(){
	int x = 10;
	double a= 12.3;
	char z = 'b';
	
	int *pX= &x;
	double *pA= &a;
	char *pZ= &z;
	
	printf("Endereço de x: %d - Valor de x: %d\n",pX,*pX);
	printf("Endereço de a: %d - Valor de a: %lf\n",pA,*pA);
	printf("Endereço de z: %d - Valor de z: %c\n",pZ,*pZ);
}
void decrementando(){
	int x=10;
	int *intpoint = &x;
	
	printf("\n %d \n", intpoint);
	intpoint--;
	printf("\n %d \n", intpoint);
	return;
}
void vezes(){
	int x=10;
	int *intpoint = &x;
	
	printf("\n %d \n", intpoint);
	intpoint = intpoint +4;
	printf("\n %d \n", intpoint);
	return;
}
void vetore(){
	char vetor[20] = "Teste de String";
	
	char *point;
	
	point = &vetor[6];
	printf("\n %d \n", *point);
	return;
}
main(){
	vetore();
}
