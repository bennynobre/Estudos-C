#include<stdio.h>
#include<stdlib.h>

void minhoca(int **M,int linha,int coluna){

    int maior=0;
    int soma=0;


    for(int i=0; i < linha; i++){
        for(int j=0; j < coluna; j++){
          scanf("%d", &M[i][j]);
        }
    }

    for(int i=0; i < linha; i++){
        soma=0;
        for(int j=0; j < coluna; j++){
          soma += M[i][j];
          }
        if(soma > maior){
            maior=soma;
        }
    } 

    for(int i=0; i < coluna; i++){
        soma=0;
        for(int j=0; j < linha; j++){
            soma += M[j][i];
        }
        if(soma > maior){
            maior=soma;
        }
    } 
    
   printf("%d", maior); 
}

int main(){

    int linha=0, coluna=0;
    int **M=NULL;

    scanf("%d", &linha);
    scanf("%d", &coluna);

    M = (int**) malloc(linha*sizeof(int*));

    for(int i=0; i < linha; i++){  
        M[i] = (int*) malloc(coluna*sizeof(int));
    }

    minhoca(M, linha, coluna);

    for (int i = 0; i < linha; i++){
        free (M[i]);
    }
    free(M);


    return 0;
}