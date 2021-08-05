#include<stdio.h>

void existe(int vet[], int vet2[], int b){
 		
	int cont=0;
	
	for(int i=0; i < b; i++){
		for(int j=0; j < b; j++){
			if(vet[i] == vet2[j]){
				cont++;
				printf("%d", cont);
			}
		}
	}
	if(cont > 0){
		printf("Existe");
	} else{
		printf("Nao existe");
	}
	
}

int main(){
	
	int a=0, b=0;
	
	scanf("%d",&a);
	int vet[a];
	
	for(int i=0; i < a; i++){
		scanf("%d",&vet[i]);
	}
	
	scanf("%d",&b);
	int vet2[b];
	
	for(int i=0; i < b; i++){
		scanf("%d",&vet2[i]);
	}
	existe(vet,vet2,b);
	
	return 0;
}
