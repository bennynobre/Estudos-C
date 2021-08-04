#include<stdio.h>

int main(){
	
	int a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0, a8=0, a9=0, a10=0, a11=0, soma_res=0, soma_res2=0, dg1=0, dg2=0;
	int aux1, aux2, aux3, aux4, aux5, aux6, aux7, aux8, aux9, aux10, cpf=0;
	
	scanf("%d %d %d %d %d %d %d %d %d %d %d",&a1,&a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11);
	
	aux1= a1*10; aux2= a2*9; aux3= a3*8; aux4= a4*7; aux5= a5*6; aux6= a6*5; aux7= a7*4; aux8= a8*3; aux9= a9*2;
	soma_res = aux1+aux2+aux3+aux4+aux5+aux6+aux7+aux8+aux9;
	
	if(soma_res%11 < 2){
		dg1 = 0;
	}else{
		dg1 = 11 - soma_res%11;
	}
	
	aux1= a1*11; aux2= a2*10; aux3= a3*9; aux4= a4*8; aux5= a5*7; aux6= a6*6; aux7= a7*5; aux8= a8*4; aux9= a9*3; aux10= dg1*2;
	soma_res2 = aux1+aux2+aux3+aux4+aux5+aux6+aux7+aux8+aux9+aux10;
	
	if(soma_res2%11 < 2){
		dg2 = 0;
	}else{
		dg2 = 11 - soma_res2%11;
	}
    if(a10 == dg1 && a11 == dg2){
    	printf("Valido");
	}else{
		printf("Invalido");
	}

	return 0;
}
