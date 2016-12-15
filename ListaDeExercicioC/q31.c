#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int i;
int hanoi(int n,char orig, char dest, char aux){
	if(n==1){
		printf("Mover disco 1 da torre %c para a torre %c\n", orig, dest);
	}else{
		hanoi(n-1,orig,aux,dest);
		printf("Mover disco %d da torre %c para a torre %c\n", n, orig, dest);
		i++;
		hanoi(n-1,aux,dest,orig);
	}
}

main(void){
	setlocale(LC_ALL, "portuguese");
	int ndisc;
	printf("Numero do disco:");
	scanf("%d",&ndisc);
	hanoi(ndisc,'1','2','3');
	printf( "Número total de movimentos: %u\n" , i );
	system("pause");
	return 0;
}
