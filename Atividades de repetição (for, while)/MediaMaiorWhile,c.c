#include<stdio.h>

int main(){
	
 int cont=0, n=0, soma=0, res=0;
 float media=0.0;
	
	scanf("%d",&n);
	
	while(cont < n){
		scanf("%d",&res);
		soma = soma + res;
	cont++;
   }
   
   media = soma/n;
   printf("%.2f",media);
	
	return 0;
}
