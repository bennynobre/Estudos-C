#include<stdio.h>

int main(){
	
	int a=0, res=0;
	
	scanf("%d",&a);
	
	if(a < 3){
		printf("0");
	}else while(a >= 3){
		res = res+a+2;
		a--;
	}
	printf("%d",res);
	
	return 0;
}
