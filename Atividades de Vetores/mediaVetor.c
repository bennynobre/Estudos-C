#include<stdio.h>

void preencherVetor(double v[], int n){
	int i=0;
	
	while(i<n){
		scanf("%lf",&v[i]);
		i++;
	}
}

double media(double v[], int n){
	double soma=0;
	int i=0;
	
	while(i<n){
		soma = soma+ v[i];
		i++;
	}
	
	return soma/n;
}

int main(){
	
	int n=0;
	
	scanf("%d",&n);
	double v[n];
	
	preencherVetor(v,n);
	printf("%.2lf\n", media(v,n));
	
	return 0;
}
