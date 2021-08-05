#include<stdio.h>

int main(){
	
	int a=0, ind1=0, ind2=0, aux=0;
	
	scanf("%d",&a);
	int v[a];
	
	for(int i=0; i < a; i++){
		scanf("%d",&v[i]);
	}
	
	scanf("%d",&ind1);
	scanf("%d",&ind2);
	
	aux = v[ind1];
	v[ind1] = v[ind2];
	v[ind2] = aux;	

	for(int i=0; i < a; i++){
			
		printf("%d ",v[i]);
	}
	
	return 0;
}
