#include<stdio.h>
void vetor(int n){
		int v[n];
		int cont=0;
	
	for(int i=0; i < n; i++){
		scanf("%d",&v[i]);
	}
	for(int i=0; i < n; i++){
	    if (i==0 && v[i]==0){
	         if(v[i+1] == 0) cont++;
	    }
		else if(i>0 && i<n-1 && v[i]==0){
		    if(v[i+1] == 0 && v[i-1] == 0) cont++;
		} else if(i==(n-1) && v[i]==0){
		    if(v[i-1] == 0) cont++;
		}
		
	}
	printf("%d", cont);
	
}


int main(){
	
	int n=0;
	
	scanf("%d",&n);
	vetor(n);

	return 0;
}
