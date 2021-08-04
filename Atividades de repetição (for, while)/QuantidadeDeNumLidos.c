#include<stdio.h>

int main(){
	
	int qtd, n, soma=0, i=0;
	
	printf("Digite a quantidad de numeros a ser lida");
	scanf("%d",&qtd);
	
	printf("Digite os %d numeros", qtd);
	do{
		scanf("%d",&n);
		soma += n;
		i++;
	}while(i<qtd);
	
	printf("A soma dos %d numeros é %d", qtd, soma);
	
	
	return 0;
}
