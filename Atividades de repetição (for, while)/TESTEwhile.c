#include<stdio.h>

int main(){
	
	int n=0, i=1, res=0, soma=0, media=0;
	
	scanf("%d",&n);
	
	while(i <= n){
		scanf("%d",&res);
		soma = soma + res;
		i++;
	}
	media = (float)soma/n;
	printf("%d", media);
	
	return 0;
}
