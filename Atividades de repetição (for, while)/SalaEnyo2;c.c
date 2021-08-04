#include <stdio.h>

int main(){
    int s, p;
    scanf("%d %d",&s,&p);
    int v[s], n[p], cont = 0;
    
    for(int i = 0; i < s; i++){
		scanf("%d",&v[i]);
	}
	
    for(int i = 0; i < p; i++){
		scanf("%d",&n[i]);
	}
	
    for(int i = 0; i < s; i++){
        if(v[0] == n[i] && v[i] == n[i]){
        cont = 1;
            
        }
    }
    if(cont == 1)printf("sim");
    else printf("nao");
    
    return 0;
}
