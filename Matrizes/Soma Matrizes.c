#include<stdio.h>
#include<stdlib.h>

void ler(int **M){

    int soma=0;

    for(int i=0; i < 2; i++){
        for(int j=0; j < 3; j++){
            scanf("%d", &M[i][j]);
            soma += M[i][j];
        }
    }
    printf("%d", soma);
    
}

int main(){

    int **M=NULL;

    M = (int**) malloc(2*sizeof(int*));

    for (int i = 0; i < 2; i++){
        M[i] = (int*) malloc(3*sizeof(int));
    }
    
    ler(M);

    for (int i = 0; i < 2; i++){
        free (M[i]);
    }
    free(M);

    return 0;
}