#include <stdio.h>

int main(){
    int n, n2;
    scanf("%d %d",&n,&n2);
    int v1[n], v2[n2], contido = 0;
    
    for(int i = 0; i< n; i++)scanf("%d",&v1[i]);
    for(int i = 0; i< n2; i++)scanf("%d",&v2[i]);
    for(int i = 0; i< n; i++){
        if(v1[0] == v2[i] && v1[i] == v2[i]){
        contido = 1;
            
        }
    }
    if(contido == 1)printf("sim");
    else printf("nao");
    
    return 0;
}
