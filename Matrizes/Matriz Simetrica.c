#include<stdio.h>
#include<stdlib.h>

void simetria(int **M){

    int Q[3][3];
    int cont_2=0;

    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
           
            scanf("%d", &M[i][j]);   
        }
    }

    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
           
            Q[j][i] = M[i][j];   
        }
    }

    for(int i=0; i < 3; i++){
            for(int j=0; j < 3; j++){

                if(Q[j][i] == M[j][i]){
                    cont_2++;
            }
        }
    }
        if(cont_2==9) printf("sim");
        else printf("nao");

}

int main(){

    int **M=NULL;

    M = (int**) malloc(3*sizeof(int));

    for (int i = 0; i < 3; i++){
        M[i] = (int*) malloc(3*sizeof(int));
    }
    
    simetria(M);

    for (int i = 0; i < 3; i++){
        free (M[i]);
    }
    free(M);

    return 0;

}