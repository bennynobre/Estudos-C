#include<stdio.h>
void capo(int capoeira){
	
	int v[capoeira];
	
	for(int i=0; i < capoeira; i++){
		scanf("%d",&v[i]);
	}
	for(int i=0; i < capoeira; i++){
		printf("%d ",v[capoeira-i-1]);
	}

}


int main(){
	
	int capoeira=0;
	scanf("%d",&capoeira);
	capo(capoeira);
	return 0;
}
