#include<stdio.h>

int main(){
	
	int n, soma=0, i=1;
	
	printf("Digite 10 valores inteiros para saber a soma entre eles");
	while(i<=10){
		scanf("%d",&n);
		soma += n;
		i++;
		
	}
	
	printf("A soma dos 10 numeros lidos e %d",soma);
	
	return 0;
}
