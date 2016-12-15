#include <stdio.h>
#include <stdlib.h>
int parouimpa(int n){
	if(n%2==0){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int number;
	printf("----------Par ou impar --------\n");
	printf("Digite um numero:");
	scanf("%d",&number);
	(parouimpa(number))?printf("o numero %d e Par\n",number):printf("o numero %d e impar\n",number);
	system("pause");
}
