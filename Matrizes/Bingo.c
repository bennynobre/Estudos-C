#include<stdio.h>
#include<stdlib.h>

void bingo(int **M){

    int v[6];
    int cont=0;

    for(int i=0; i < 6; i++){
        scanf("%d", &v[i]);
    }

    for(int i=0; i < 4; i++){
        for(int j=0; j < 4; j++){
           
            scanf("%d", &M[i][j]);
        }
    }
    for(int i=0; i < 4; i++){
        for(int j=0; j < 4; j++){
           
            if(v[0] == M[i][j]){
                cont++;
            }
            if(v[1] == M[i][j]){
                cont++;
            }
            if(v[2] == M[i][j]){
                cont++;
            }
            if(v[3] == M[i][j]){
                cont++;
            }
            if(v[4] == M[i][j]){
                cont++;
            }
            if(v[5] == M[i][j]){
                cont++;
            }
        }
    }
    printf("%d", cont);
      

}

int main(){

    int **M=NULL;

    M = (int**) malloc(4*sizeof(int*));

    for (int i = 0; i < 4; i++){
        M[i] = (int*) malloc(4*sizeof(int));
    }
    
    bingo(M);

    for (int i = 0; i < 4; i++){
        free (M[i]);
    }
    free(M);

    return 0;
}