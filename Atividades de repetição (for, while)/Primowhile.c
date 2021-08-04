#include<stdio.h>

int main(){
	
	int n=0, i=2, res=0;
	scanf("%d",&n);
	
	if(n==0 || n==1){
		printf("nao"); return 0;
	}
	
	while(n > i){
		if(n%i==0){printf("Nao"); return 0;}
		i++;
	}
	printf("Sim");

	
	return 0;
}
