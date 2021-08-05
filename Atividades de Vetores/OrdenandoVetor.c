#include<stdio.h>

void bubble(int a, int vet[]){
	
		for(int i=1; i < a; i++){
		for(int j=0; j < a-1; j++){
			
			if(vet[j] > vet[j+1]){
				
				float aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
				
			}
		}
	}
	for(int i=0; i < a; i++){
		printf("%d\n",vet[i]);
	}
}

int main(){
	
	int a=0;
	
	scanf("%d",&a);
	int vet[a];
	
	for(int i=0; i < a; i++){
		scanf("%d", &vet[i]);
	}
	bubble(a,vet);
	
	return 0;
}
