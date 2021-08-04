#include<stdio.h>

int main(){
	
	int n=0, i=0, j=2, res=0, soma=0;
	scanf("%d",&n);
	
	for(i; n >= i; i++){
		res=1;
		for(j=2; i > j; j++){
			if(i%j==0){
				res=0;
			}
		}if(res==1)
		soma += i;
	}
	if(n==0){
	    printf("%d",0);
	}else printf("%d",soma-1);
	return 0;
}
