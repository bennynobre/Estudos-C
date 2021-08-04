#include<stdio.h>

int divisao(int a){
	
	if(a%3 == 0 && a%5 == 0 && a%7 != 0){printf("sim"); return 0;}
	if(a/3 && a/5 && a/7){printf("nao"); return 0;}
	if(a%3 != 0 && a%7 != 0 && a%5 == 0){printf("nao"); return 0;}
	else {printf("nao"); return 0;}
	
}

int main(){
	int a=0, res=0;
	scanf("%d",&a);
	res = divisao(a);
	
	return 0;
}
