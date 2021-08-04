#include<stdio.h>

int main(){
	
	int n=0, soma_pares=0, cont_pares=0;
	
	do{
		
		scanf("%d",&n);
		if(n%2==0){
		soma_pares += n;
		cont_pares++;
	    }
	}while(n%2 == 0);

	printf("%d %d", cont_pares, soma_pares);
	
	return 0;
}
