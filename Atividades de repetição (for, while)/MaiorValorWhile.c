#include<stdio.h>

int main(){
	
	int n=0, menor=0, maior=0, i=0;
	int cont = 1;
	scanf("%d",&n);
	
	i =n;
	
	while(cont <= n){
		scanf("%d",&i);
	if(cont == 1) menor = i, maior = i;
	
	if(i > maior) maior = i;

	if(i < menor) menor = i;
	
		cont ++;
}
	printf("%d %d",maior,menor);
	
	
	return 0;
}
