#include<stdio.h>
#include<stdlib.h>

void ler(int **M, int nlin, int ncol){

    for(int i=0; i < nlin; i++){
        for(int j=0; j < ncol; j++){
            scanf("%d", &M[i][j]);
        }
    }
}

void imprimir(int **M, int nlin, int ncol){

    for(int i=0; i < nlin; i++){
        for(int j=0; j < ncol; j++){
            printf("%d ", &M[i][j]);
        }
        printf("\n");
    }
}


int main(){

    int nlin=0, ncol=0;
    int **M=NULL;

    printf("Digite o numero de linhas: ");
    scanf("%d", &nlin);
    printf("Digite o numero de colunas: ");
    scanf("%d", &ncol);

    M = (int**) malloc(nlin*sizeof(int*));

    for(int i=0; i < nlin; i++){
        M[i] = (int*) malloc(ncol*sizeof(int));
    }

    ler(M,nlin,ncol);
    imprimir(M,nlin,ncol);

    for(int i=0; i < nlin; i++){
        free(M[i]);
    }
    free(M);
    M=NULL;

    return 0;
}