#include<stdio.h>
void z(int domino){
		
		int aux=0, aux2=0;
		int v[domino];
	
	for(int i=0; i < domino; i++){
		scanf("%d",&v[i]);
	}
	for(int j=0; j < domino; j++){
		if(j == 0){
			aux = v[0];
		} 
		if(aux <= v[j]){
			aux = v[j];
			aux2 = 1;
		} else{
			aux2 = 0;
		}
	}
			if(aux2 == 1){
				printf("ok");
			} else{
				printf("Precisa de ajustes");
			}
}


int main(){
	
	int domino=0, res=0;
	scanf("%d",&domino);
	z(domino);

	return 0;
}
