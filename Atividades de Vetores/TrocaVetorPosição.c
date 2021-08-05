#include<stdio.h>

void resultado(int a, int v[], int v2[]){
	
		for(int i=0; i < a; i++){
		scanf("%d",&v[i]);
	}
	
	for(int j=0; j < a; j++){
		scanf("%d",&v2[j]);
	}
	
	for(int i=0; i < a; i++){
		printf("%d ",v2[i]);
	}
	
	printf("\n");
	
	
	for(int i=0; i < a; i++){
		printf("%d ",v[i]);
	}
}

int main(){
	
	int a=0, aux=0;
	
	scanf("%d",&a);
	int v[a];
	int v2[a];
	resultado(a,v,v2);
	
	return 0;
}
