#include<stdio.h>

int main(){
	
	int x=0, sub=1, x_var=0;
	scanf("%d",&x);
	
	x_var=x;
	
	sub = 1;
	
	while(x_var > 1){
		sub= sub*x_var;
	    x_var=x_var-1;
	}
	printf("%d",sub);
	
	return 0;
}
