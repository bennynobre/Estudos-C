#include<stdio.h>

int main(){
	
	int t=0, soma=0, soma2=0;
	scanf("%d",&t);
	
	int v[t];
	
	for(int i=1; i <= t; i++){
		scanf("%d",&v[i]);
		
			if(i <= (t/2)){
		soma = soma + v[i];
	} else{
		soma2 += v[i];
	}
}
	
	if(soma == soma2){
		printf("Empate");
	} else if(soma < soma2){
		printf("Jedi");
	} else if(soma > soma2){
		printf("Sith");
	}
	
	return 0;
}
