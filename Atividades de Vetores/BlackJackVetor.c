#include<stdio.h>

void Lermao(int mao[], int n){
	
		
	for(int i=0; i < n; i++){
		scanf("%d",&mao[i]);
	}
}

int valorMao(int mao[], int n){
	int soma=0, cont=0;
	
	for(int i=0; i<n; i++){
		
		if(mao[i] == 1){
			soma += 11;
			cont++;
		}
			else if(mao[i] > 10){
					soma += 10;
					}else {soma += mao[i];}
	}
	while(soma > 21 && cont > 0){
		soma -= 10;
		cont--;
	}
	
	return soma;
	
}


int main(){
	
	int n=0, res=0;
	
	scanf("%d", &n);
	int mao[n]; 
	Lermao(mao,n);
	res = valorMao(mao,n);
	
	printf("res=%d\n", res);
	
	return 0;
}
