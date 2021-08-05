#include <stdio.h>

int main(){
	
	int n[5], soma=0, maior=0, menor=0;
	
	for(int i=0; i < 5; i++){
		scanf("%d", &n[i]);
	}
	maior = n[0];
	menor = n[0];
	
		for(int j=0; j < 5; j++){
			
			if(maior < n[j]) maior = n[j];
			if(menor > n[j]) menor = n[j];
	
		}
		soma = maior+menor;
		printf("%d",soma);
	
	
	return 0;
}
