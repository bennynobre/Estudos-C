#include<stdio.h>

int main(){
	
	int num[10], soma=0;
	
	for(int i=0; i < 10; i++){
		scanf("%d", &num[i]);
	}
	for(int i=0; i < 10; i++){
		soma += num[i];
	}
	
		printf("%d",soma);
	
	return 0;
}

//////////////////////////////////////////////////

