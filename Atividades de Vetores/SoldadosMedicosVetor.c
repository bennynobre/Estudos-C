#include<stdio.h>

int main(){
	
	int n=0, cont=0;
	
	scanf("%d",&n);
	int v[n];
	
	for(int i=0; i < n; i++){
		scanf("%d",&v[i]);
	}
	for(int i=0; i < n; i++){
		
		if(v[i] == 0 && v[i+1] == 1 && v[i-1] == 1) cont++;
		else if(v[i] == 1 && v[i-1] == 0 && v[i+1] == 1) cont++;
		else if(v[i] == 0 && v[i+1] == 0 && v[i+1] == 0) cont++;
	}
	printf("%d", cont);
	
	return 0;
}
