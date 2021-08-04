#include<stdio.h>

int main(){
	
	int n=0, soma_pares=0, cont_pares=0;
	
	printf("Digite numeros para saber a soma dos pares. Ao digitar um numero impar, a leitura encerra");
	while(n%2==0){
		scanf("%d",&n);
		if(n%2==0){
			soma_pares += n;
			cont_pares++;
		}
	}
	
	printf("A soma dos %d numeros pares lidos e %d", cont_pares, soma_pares);
	
	return 0;
}
