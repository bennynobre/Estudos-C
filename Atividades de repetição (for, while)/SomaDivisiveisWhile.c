#include<stdio.h>

int main(){
	
	int a=0, i=0, soma=0, num=1;
	scanf("%d",&a);
	
	while(i<a){
		if(num%3==0 && num%7!=0){
			soma+=num;
			i++;
		}
		num++;
	}
	printf("%d",soma);
	return 0;
}
