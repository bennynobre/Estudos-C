#include<stdio.h>

int main(){
	
	int n, soma =0, i=0;
	
	printf("Digite 10 numeros para saber a soma entre eles");
	
	for(i=1;i<=10; i++ ){
	    scanf("%d",&n);
	    soma += n;
}
    printf("A soma dos 10 numeros lidos E %d", soma);
	
	return 0;
}
