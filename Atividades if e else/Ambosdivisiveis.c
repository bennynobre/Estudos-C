#include<stdio.h>

int main(){
	
	int x=0, y=0;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	if(x%3 == 0 && y%3 == 0){
		printf("sim");
	}
	else if(x%5 == 0 && y%5 == 0){
		printf("sim");
	}
	else if(x%3 != 0 && y%3 != 0){
		printf("nao");
	}
	else if(x%5 != 0 && y%5 != 0){
		printf("nao");
	}
	else{printf("nao");}
	
	
	
	return 0;
}
