#include<stdio.h>

int main(){
	
	int n=0;
	
	scanf("%d",&n);
	
	int v[n];
	
	for(int i =0; i < n; i++){
		scanf("%d",& v[i]);
			}
			
			printf("[ ");
	for(int i = 0; i < n; i++){
		
		if(v[i]%2 != 0){
		printf("%d ", v[i]);
		}
	}
		printf("]");
		
		printf("\n");
		
		printf("[ ");
	for(int i=0; i < n; i++){
		
		if(v[i]%2 == 0){
			printf("%d ",v[i]);
		}
	}
		printf("]");
	
	return 0;
}
