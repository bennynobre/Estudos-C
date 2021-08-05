#include<stdio.h>

int main(){
	
	int a=0;
	
	scanf("%d",&a);
	int vet[a];
	
	for(int i=0; i < a; i++){
		scanf("%d", &vet[i]);
	}
	for(int i=0; i < a; i++){
		printf("%d", vet[i]);
	}
	
	return 0;
}
