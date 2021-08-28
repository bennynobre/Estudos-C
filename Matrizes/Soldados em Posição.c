#include<stdio.h>
#include<stdlib.h>

#define linha 3
#define coluna 3

void posi(int **M){

    int cont=0;

     for(int i=0; i < linha; i++){
        for(int j=0; j < coluna; j++){
           
            scanf("%d", &M[i][j]);   
        }
    }

    for(int i=0; i < linha; i++){
        for(int j=0; j < coluna-1; j++){

            if(M[j][i] > M[j+1][i]){
                cont++;
            }
        }
    }
    printf("%d", cont);

}

int main(){

int **M=NULL;

    M = (int**) malloc(linha*sizeof(int*));

    for (int i = 0; i < linha; i++){
        M[i] = (int*) malloc(coluna*sizeof(int));
    }
    
    posi(M);

    for (int i = 0; i < linha; i++){
        free (M[i]);
    }
    free(M);


    return 0;
}