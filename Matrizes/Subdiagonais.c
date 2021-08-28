#include<stdio.h>
#include<stdlib.h>

void diag(int **M){

    int soma1=0;
    int soma2=0;
    int cont = (5-1);

     for(int i=0; i < 5; i++){
        for(int j=0; j < 5; j++){
           
            scanf("%d", &M[i][j]);   
        }
    }

    for(int i=0; i < 5; i++){

           soma1 += M[i][i];  
    }
    for(int i=0; i < 5; i++){
              
           soma2 += M[cont][i];  
           cont--;
    }
    printf("%d", soma1 - soma2);

}


int main(){

    int **M=NULL;

    M = (int**) malloc(5*sizeof(int*));

    for (int i = 0; i < 5; i++){
        M[i] = (int*) malloc(5*sizeof(int));
    }
    
    diag(M);

    for (int i = 0; i < 5; i++){
        free (M[i]);
    }
    free(M);

    return 0;
}