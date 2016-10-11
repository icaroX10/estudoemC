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
main(){
	test2();
}
