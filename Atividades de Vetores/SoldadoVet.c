#include<stdio.h>

int main(){
	
	int sold=0;
	double media=0, soma=0;
	
	scanf("%d", &sold);
	double n[sold];	
	
	for(int i=0; i < sold; i++){
		scanf("%lf", &n[i]);
		soma += n[i];	
	}
	
	media = soma/sold;
	printf("%.2lf\n",media);
	
	for(int j=0; j < sold ; j++){
		
	if(media > n[j]) printf("P ");
	else if(media == n[j]) printf("M ");
	else if(media < n[j]) printf("G ");
    }
	
	return 0;
}
