#include <stdio.h>
//1 - Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.
int maiorEnd(){
    int a=1,b=2,*pa=&a,*pb=&b;
    if(pa>pb){
       printf(" A = %d e maior que B = %d",pa,pb);
    }else{
       printf("B = %d e maior que B = %d",pb,pa);
    }
    return 0;
}
//2 - Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.
int pontArray(){
    float vet[10]={1,2,30,4,5,6,7,8,9,10},*pV;
    int i;
    pV = vet;
    for(i=0;i<10;i++)printf("%d\n",(pV+i));
}
//3 - Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja,
// esta função é chamada passando duas variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B terá valor de A.
int troca(int a,int b){
    int *pa,*pb,*cont;
    pa = &a;
    pb = &b;
    cont = pa;
    pa = pb;
    pb = cont;
    printf("A=%d B=%d\n",*pa,*pb);
}
//4 - Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de ponteiros, 
//leia esse array do teclado e imprima o dobro de cada valor lido.

int main(){
    troca(20,30);
    system("pause");
    return 0;    
}
