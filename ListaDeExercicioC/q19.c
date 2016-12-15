#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL, "portuguese");
	int i,j;
	for(i=1;i<=10;i++){
		for(j=0;j<i;j++){
			printf("-");
		}
		printf("%d",i);
		
		printf("\n");
	}
	system("pause");
	return 0;
}	
