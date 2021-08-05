#include<stdio.h>

int main(){
	
	int a=0;
	
	scanf("%d",&a);
	float vet[a];
	
	for(int i=0; i < a; i++){
		scanf("%f",&vet[i]);
	}

	for(int i=1; i < a; i++){
		for(int j=0; j < a-1; j++){
			
			if(vet[j] > vet[j+1]){
				
				float aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
				
			}
		}
		
	}
	if(a%2 != 0){
		printf("%.1f", vet[(a/2)]);
	} else {
		printf("%.1f", ((vet[a/2] + vet[a/2-1])/2));
	}

	return 0;
}
