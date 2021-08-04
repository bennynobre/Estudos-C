#include<stdio.h>
int calculo(int dia, int mes, int ano){
	
	int a=0, b=0, c=0, d=0, soma=0, res=0;
	
	a = ano-1900;
	b = a/4;
	c= mes;
	d= dia-1;
	
	if(mes==1 || mes==2) b-=1;
	
	if(mes==1) c=0;
	else if(mes==2) c=3;
	else if(mes==3) c=3;
	else if(mes==4) c=6;
	else if(mes==5) c=1;
	else if(mes==6) c=4;
	else if(mes==7) c=6;
	else if(mes==8) c=2;
	else if(mes==9) c=5;
	else if(mes==10) c=0;
	else if(mes==11) c=3;
	else if(mes==12) c=5;
	
	soma= a+b+c+d;
	soma= soma%7;
	
	if(soma==0){
		printf("SEG"); return 0;
	} 
	else if(soma==1){
		printf("TER"); return 0;
	}
	else if(soma==2){
		printf("QUA"); return 0;
	}
	else if(soma==3){
		printf("QUI"); return 0;
	}
	else if(soma==4){
		printf("SEX"); return 0;
	}
	else if(soma==5){
		printf("SAB"); return 0;
	}
	else if(soma==6){
		printf("DOM"); return 0;
	}
	
	return 0;
}


int main(){
	
	int dia=0, mes=0, ano=0, res=0;
	scanf("%d",&dia);
	scanf("%d",&mes);
	scanf("%d",&ano);
	res= calculo(dia,mes,ano);
	
	return 0;
}
