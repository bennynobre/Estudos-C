#include<stdio.h>
#include<stdlib.h>

float calculadora(float x, float y, char sinal)
{
	if(y == 0 && sinal == '/'){printf("invalida"); return 3;} 
	if(sinal == '+'){printf("%.0f\n",x+y); return 4;} 
    else if(sinal == '-'){printf("%.0f\n",x-y); return 4;}
    else if(sinal == '*'){printf("%.0f\n",x*y); return 4;}
	else if(sinal == '/'){printf("%.1f\n",x/y); return 4;}
	else printf("invalida!\n");
	 
}

int main(){
	
	float x=0, y=0, res=0;
	char z;
	
	scanf("%f",&x);
	scanf("%f",&y);
	scanf(" %c",&z);	   
	res = calculadora(x,y,z);
	
	
	return 0;
}
