#include<stdio.h>

int main(){
	int soma_par=0, soma_impar=0;
	char bigStr[1001];
	int bigInt[1000];
	
	scanf("%s", bigStr);
	for(int i=0; bigStr[i] != '\0'; i++ ){
		bigInt[i] = bigStr[i]-48;            // String por conta da tabela ASCII
	,ol 
	}
	
	for(int i=0; bigInt[i] != '\0'; i++){
		if(i%2 == 0){
			soma_par = soma_par + bigInt[i];
		}
		if(i%2 != 0){
			soma_impar = soma_impar + bigInt[i];
		}
	}
	
	if((soma_par-soma_impar)%11 == 0){
		printf("sim");
	} else printf("nao");
	 
	return 0;
}
