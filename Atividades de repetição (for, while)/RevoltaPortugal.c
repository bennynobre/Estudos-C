#include<stdio.h>

int main(){
	
	int sold=0, cont_sold=0, cont_reb=0;
	
	scanf("%d",&sold);
	
	int v[sold];
	
	for(int i=0; i < sold; i++){
		scanf("%d",& v[i]);
		
		if(v[i]%2 == 0){
		cont_sold = cont_sold + v[i];
	}
		else if(v[i]%2 != 0){
			cont_reb = cont_reb + v[i];
		}
	}			
				if(cont_sold == cont_reb){
					printf("empate");
				} else if(cont_sold > cont_reb){
					printf("rebeldes");
				} else if(cont_sold < cont_reb){
					printf("soldados");
				}
		

	
	return 0;
}
