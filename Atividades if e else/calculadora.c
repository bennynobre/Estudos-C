#include<stdio.h>
#include<stdlib.h>

int calculo(int x, int y){
    char sinal;
        if(sinal == '+')printf("%d\n",x+y);
        else if(sinal == '-')printf("%d\n",x-y);
        else if(sinal == '*')printf("%d\n",x*y);
        else if(sinal == '/')printf("%d\n",x/y);
            else printf("Numero invalido\n");
    return 0;
}

int main(){
	
	int x=0, y=0, resultado=0;
	char sinal;
	
	scanf("%d",&x);
	scanf("%d",&y);
	scanf(" %c",&sinal);	   
	resultado = calculo(x,y);
	printf("%d",resultado);
	
	return 0;
}
