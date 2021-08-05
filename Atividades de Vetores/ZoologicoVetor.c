#include<stdio.h>
void zoo(int animal){
		
	int cont=0;
	int v[animal], a[animal];
	
	for(int i=0; i < animal; i++){
		scanf("%d",& v[i]);
		
		int aux=0;
		for(int j=0; j < animal; j++){
			if(v[i] == a[j]){
			aux=1;	
			}
		}
		if(aux==0){
			a[cont]=v[i];
			cont++;
		}
	}
	printf("%d",cont);
}


int main(){
	
	int animal=0;
	scanf("%d",&animal);	
	zoo(animal);
	return 0;
}
