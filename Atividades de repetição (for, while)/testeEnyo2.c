#include<stdio.h>

int main(){
	
	int qtd, n, soma=0, i=0;
	
	scanf("%d",&qtd);
	
	while(i<qtd){
		scanf("%d",&n);
		soma += n;
		i++;
	}
	
	printf("%d %d",qtd,soma);
		
	return 0;
}
