#include<stdio.h>

int main(){
	
	int a=0, cont=0, aux=0, aux2=0;
	
	scanf("%d", &a);
	int vet[a];
	int vet2[a];
	
	for(int i=0; i < a; i++){
		scanf("%d", &vet[i]);
	}
	
	for(int i=1; i < a; i++){
		for(int j=0; j < a-1; j++){
			
			if(vet[j] > vet[j+1]){
				
				int aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
				
			}
		}
	}
	for(int i=0; i < a; i++){
		if(i == 0){
			vet2[a] = aux;
			aux++;
		}
		if(aux != vet[i]){
			aux = vet[i];
			vet2[a] = aux;
			aux++;
		}
		
	}
	for(int i=0; i < a; i++){
		printf("%d", vet2[i]);
	}
	
	
	return 0;
}
